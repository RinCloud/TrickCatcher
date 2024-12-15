import pandas as pd
import math
import json
from itertools import combinations
combination_cache = {}
def Cnk(n, k):
    if (n, k) in combination_cache:
        return combination_cache[(n, k)]
    result = math.comb(n, k)
    combination_cache[(n, k)] = result
    return result

def get_trigger_df(df:pd.DataFrame,lang:str,method_type:str):
    '''
    method_type: 'dfp' or 'tc'
    lang: 'cpp' or 'python'
    '''
    assert lang in ['cpp','python']
    if method_type!='dfp' and method_type!='tc':
        raise RuntimeError(f"Wrong method_type: {method_type}")

    result_df = pd.DataFrame(columns=['pid', 'input_name','out','sol_names','input_valid','input_valid_byref','out_correct'])

    # A: the PUT
    # B: other programs
    if lang=='cpp':
        A = df[df['sol_name'].str.startswith('sol_')]
        B = df[~df['sol_name'].str.startswith('sol_')]
    elif lang=='python':
        A = df[~df['sol_name'].str.startswith('p0')]
        B = df[df['sol_name'].str.startswith('p0')]
    
    A_outputs = A[['pid', 'input_name', 'out']].drop_duplicates()

    # check B outputs with the same value
    B_grouped = (B.groupby(['pid', 'input_name']))
    totoal_len=len(B_grouped)
    count=0
    for (pid, input_name), group_df in B_grouped:
        count+=1
        if count%1000==0:
            print(f"get_triger: {count}/{totoal_len}")
        group_df=group_df.drop_duplicates(subset=['pid','input_name','sol_name','out'])
        # deduplicate is import when multiple ref_out occur
        # For Example:
        # A[(A['pid']=='p02550') & (A['input_name']=='1_1_1.in.json')]
        # pid	input_name	sol_name	out	is_out_hash	input_valid	number_of_sols	ref_out	is_refout_hash	input_valid_byref	out_correct
        # 121	p02550	1_1_1.in.json	sol_129.out	0	False	0	4	104	False	False	False
        # 122	p02550	1_1_1.in.json	sol_129.out	0	False	0	1	0	False	False	True
        out_values = group_df['out'].values
        unique_out_values = set(out_values)        

        for out_value in unique_out_values:
            
            a_out_df=A_outputs[(A_outputs['pid'] == pid) & (A_outputs['input_name'] == input_name)]
         
            if len(a_out_df)<1 :
                continue
            a_out = A[(A['pid'] == pid) & (A['input_name'] == input_name)]['out'].values[0]
            if out_value==a_out:
                continue
        # get sol_name with the same out
            matching_sol_names = group_df[group_df['out']==out_value]['sol_name'].to_list()
            try:
                input_valid=group_df[group_df['out']==out_value]['input_valid'].to_list()[0]
                input_valid_byref=group_df[group_df['out']==out_value]['input_valid_byref'].to_list()[0]
                out_correct=group_df[group_df['out']==out_value]['out_correct'].to_list()[0]
            except:
                continue
            if method_type=='dfp' and len(matching_sol_names) < 2 :
                continue

            matching_sol_names=tuple(matching_sol_names)
            result_df.loc[len(result_df)] = [pid,input_name,out_value,matching_sol_names,input_valid,input_valid_byref,out_correct]
            
    return result_df


def compute_res_df(df_triger:pd.DataFrame,num_of_ref_progs:int,method_type:str):
    assert(method_type in ['tc','dfp'])
    res_df=pd.DataFrame(columns=['pid','total','TP','FP'])
    ori_n=num_of_ref_progs
    for pid in df_triger['pid'].unique():
        # print(f"{pid} start")
        num_of_ref_progs=ori_n
        df_triger_pid=df_triger[df_triger['pid']==pid].copy()
        sols_set = set()
        df_triger_pid['sol_names'].apply(lambda x: sols_set.update( [sol_name.split('_')[1] for sol_name in x] ))
        sols_list=sorted(list(sols_set))
        total_sols_num=df_triger_pid['total_sols_num'].max()
        if total_sols_num<num_of_ref_progs:
            num_of_ref_progs=total_sols_num
        total=Cnk(total_sols_num,num_of_ref_progs)

        all_sols_name=['num0','num1','num2','num3','num4','num5','num6','num7','num8','num9']
        out_sols_num=total_sols_num-len(sols_list)
        if out_sols_num!=0:
            out_sols_name=set(all_sols_name)-set(sols_list)
            out_sols_name=list(out_sols_name)
            out_sols_name.sort()
            out_sols_list=out_sols_name[:out_sols_num]
        else:
            out_sols_list=[]
        to_use_sols_name=sols_list+out_sols_list

        combos=list(combinations(to_use_sols_name,num_of_ref_progs))
        combos.sort()

        if method_type=='dfp':
            tp,fp=0,0
            # pick num_of_ref_progs sols and check whether they are in the same group
            # compute the average tp and fp among all inputs

            for combo in combos:
                combo=list(combo)
        
                df_triger_pid['combo_all_true']=df_triger_pid[combo].all(axis=1)
                df_tmp=df_triger_pid[df_triger_pid['combo_all_true']]
                if len(df_tmp)<1:
                    continue
                tp+= len(df_tmp[df_tmp['final_valid']==True])/len(df_tmp)
                fp+= 1-len(df_tmp[df_tmp['final_valid']==True])/len(df_tmp)
                if fp<0:
                    print(f"NOW TP:{tp},FP:{fp}")
                    print(len(df_tmp),len(df_tmp[df_tmp['final_valid']==True]),len(df_tmp[df_tmp['final_valid']==False]))
                    
            if tp==0 and fp==0:
                continue
            res_df.loc[len(res_df)]=[pid,total,tp,fp]
        
        elif method_type=='tc':
            tp,fp=0,0
            for combo in combos:
                
                combo=list(combo)    
                df_triger_pid['combo_any_true']=df_triger_pid[combo].any(axis=1)
                # first find all triger sol groups
                df_tmp=df_triger_pid[df_triger_pid['combo_any_true']].copy()
                if len(df_tmp)<1:
                    continue
                
                df_tmp['sols_in_combo_num'] = df_tmp.loc[:,combo].sum(axis=1)
                max_sols_in_combo = df_tmp.groupby('input_name')['sols_in_combo_num'].transform('max')
                df_tmp=df_tmp[df_tmp['sols_in_combo_num']==max_sols_in_combo]
                tp+=len(df_tmp[df_tmp['final_valid']==True])/len(df_tmp)
                fp+= 1 - len(df_tmp[df_tmp['final_valid']==True])/len(df_tmp)
            if tp==0 and fp==0:
                continue
            res_df.loc[len(res_df)]=[pid,total,tp,fp]

    
    res_df['TP_rate']=res_df['TP']/res_df['total']
    res_df['FP_rate']=res_df['FP']/res_df['total']
    res_df['precision']=res_df['TP']/(res_df['TP']+res_df['FP'])
    return res_df





def ep_get_ref_df(json_path:str):
    df = pd.DataFrame(columns=['task_id', 'input_name', 'ref_out', 'input_valid'])
    with open(json_path,"r") as f:
        ref_json=json.load(f)
    for task_key in ref_json:
        this_task_json=ref_json[task_key]
        task_id=task_key.replace('/','_')
        inp_len=len(this_task_json)
        new_rows=[]
        for i in range(inp_len):
            #print(f"{task_id} input_{i}")
            valid=this_task_json[i][0]
            output=this_task_json[i][1]
            if valid==True:
                new_row=[task_id,f"input_{i}",output,True]
            else:
                new_row=[task_id,f"input_{i}",None,False]
            new_rows.append(new_row)
        df_new_rows=pd.DataFrame(new_rows, columns=['task_id', 'input_name', 'ref_out', 'input_valid'])
        df=pd.concat([df,df_new_rows],ignore_index=True)
    return df

def to_hashable(obj):
    if isinstance(obj, (list, tuple)):
        return tuple(to_hashable(item) for item in obj)
    elif isinstance(obj, dict):
        return frozenset((key, to_hashable(value)) for key, value in obj.items())
    else:
        return obj
    
def ep_get_trigger_df(df:pd.DataFrame,method_type:str):
    assert method_type in ['dfp','tc']
    df['out']=df['out'].apply(to_hashable)
    result_df=pd.DataFrame(columns=['task_id', 'input_name','out','sol_names','input_valid','out_correct'])
    A=df[(df['sol_name']=='put')]
    B=df[~(df['sol_name']=='put')]
    A_outputs=A[['task_id', 'input_name', 'out']].drop_duplicates()
    B_grouped = (B.groupby(['task_id', 'input_name']))
    totoal_len=len(B_grouped)
    count=0
    for (task_id, input_name), group_df in B_grouped:
        count+=1
        if count%1000==0:
            print(f"get_triger: {count}/{totoal_len}")
        group_df=group_df.drop_duplicates(subset=['task_id','input_name','sol_name','out'])
        out_values = group_df['out'].values
        unique_out_values = set(out_values) 
        for out_value in unique_out_values:
            a_out_df=A_outputs[(A_outputs['task_id'] == task_id) & (A_outputs['input_name'] == input_name)]
            if len(a_out_df)<1 :
                #print("continue1")
                continue
            a_out = A[(A['task_id'] == task_id) & (A['input_name'] == input_name)]['out'].values[0]
            if out_value==a_out:
                #print("continue2")
                continue
            matching_sol_names = group_df[group_df['out']==out_value]['sol_name'].to_list()
            input_valid=group_df[group_df['out']==out_value]['input_valid'].to_list()[0]

            out_correct=group_df[group_df['out']==out_value]['out_correct'].to_list()[0]
            if method_type=='dfp' and len(matching_sol_names) < 2 :
                #print("continue4")
                continue
            matching_sol_names=tuple(matching_sol_names)
            result_df.loc[len(result_df)] = [task_id,input_name,out_value,matching_sol_names,input_valid,out_correct]
    result_df['len_sol_names']=result_df['sol_names'].apply(lambda x:len(x))
    result_df['final_valid']= ( (result_df['input_valid'] == True) & (result_df['out_correct']) )
    result_df['total_sols_num']=result_df['task_id'].apply(lambda x:len(df[df['task_id']==x].drop_duplicates(subset=['sol_name']))-1)
    for i in range(10):
        column_name=f"num{i}"
        result_df[column_name] = result_df['sol_names'].apply(lambda x: 1 if f"sol{i}" in x else 0)
    return result_df


def ep_compute_res(df_triger:pd.DataFrame,num_of_ref_progs:int,method_type:str):
    assert method_type in ['dfp','tc']
    res_df=pd.DataFrame(columns=['task_id','total','TP','FP'])
    ori_n=num_of_ref_progs
    for task_id in df_triger['task_id'].unique():
        num_of_ref_progs=ori_n
        df_triger_pid=df_triger[df_triger['task_id']==task_id].copy()
        sols_set = set()
        df_triger_pid['sol_names'].apply(lambda x: sols_set.update( [f"num{sol_name[-1]}" for sol_name in x] ))
        sols_list=sorted(list(sols_set))
        total_sols_num=df_triger_pid['total_sols_num'].max()
        if total_sols_num<num_of_ref_progs:
            num_of_ref_progs=total_sols_num
        total=Cnk(total_sols_num,num_of_ref_progs)
        all_sols_name=['num0','num1','num2','num3','num4','num5','num6','num7','num8','num9']
        out_sols_num=total_sols_num-len(sols_list)
        if out_sols_num!=0:
            out_sols_name=set(all_sols_name)-set(sols_list)
            out_sols_name=list(out_sols_name)
            out_sols_name.sort()
            out_sols_list=out_sols_name[:out_sols_num]
        else:
            out_sols_list=[]    
        to_use_sols_name=sols_list+out_sols_list

        combos=list(combinations(to_use_sols_name,num_of_ref_progs))
        combos.sort()
        if method_type=='dfp':
            tp,fp=0,0
            for combo in combos:
                combo=list(combo)
                df_triger_pid['combo_all_true']=df_triger_pid[combo].all(axis=1)
                df_tmp=df_triger_pid[df_triger_pid['combo_all_true']]
                if len(df_tmp)<1:
                    continue
                tp+= len(df_tmp[df_tmp['final_valid']==True])/len(df_tmp)
                fp+= 1-len(df_tmp[df_tmp['final_valid']==True])/len(df_tmp)
                if fp<0:
                    print(f"NOW TP:{tp},FP:{fp}")
                    print(len(df_tmp),len(df_tmp[df_tmp['final_valid']==True]),len(df_tmp[df_tmp['final_valid']==False]))
                    
            if tp==0 and fp==0:
                continue
            res_df.loc[len(res_df)]=[task_id,total,tp,fp]
        elif method_type=='tc':
            tp,fp=0,0
            for combo in combos:
                combo=list(combo)    
                df_triger_pid['combo_any_true']=df_triger_pid[combo].any(axis=1)
                df_tmp=df_triger_pid[df_triger_pid['combo_any_true']].copy()
                if len(df_tmp)<1:
                    continue
                
                df_tmp['sols_in_combo_num'] = df_tmp.loc[:,combo].sum(axis=1)
                max_sols_in_combo = df_tmp.groupby('input_name')['sols_in_combo_num'].transform('max')
                df_tmp=df_tmp[df_tmp['sols_in_combo_num']==max_sols_in_combo]
                tp+=len(df_tmp[df_tmp['final_valid']==True])/len(df_tmp)
                fp+= 1 - len(df_tmp[df_tmp['final_valid']==True])/len(df_tmp)
            if tp==0 and fp==0:
                continue
            res_df.loc[len(res_df)]=[task_id,total,tp,fp]
        else:
            raise RuntimeError(f"Wrong method_type: {method_type}")
    res_df['TP_rate']=res_df['TP']/res_df['total']
    res_df['FP_rate']=res_df['FP']/res_df['total']
    res_df['precision']=res_df['TP']/(res_df['TP']+res_df['FP'])
    return res_df


def ep_can_compute_res(df_triger:pd.DataFrame,num_of_ref_progs:int,method_type:str):
    assert method_type in ['dfp','tc']
    res_df=pd.DataFrame(columns=['task_id','total','TP','FP','FP_bad_input'])
    ori_n=num_of_ref_progs
    for task_id in df_triger['task_id'].unique():
        num_of_ref_progs=ori_n
        df_triger_pid=df_triger[df_triger['task_id']==task_id].copy()
        sols_set = set()
        df_triger_pid['sol_names'].apply(lambda x: sols_set.update( [f"num{sol_name[-1]}" for sol_name in x] ))
        sols_list=sorted(list(sols_set))
        total_sols_num=df_triger_pid['total_sols_num'].max()
        if total_sols_num<num_of_ref_progs:
            num_of_ref_progs=total_sols_num
        total=Cnk(total_sols_num,num_of_ref_progs)
        all_sols_name=['num0','num1','num2','num3','num4','num5','num6','num7','num8','num9']
        out_sols_num=total_sols_num-len(sols_list)
        if out_sols_num!=0:
            out_sols_name=set(all_sols_name)-set(sols_list)
            out_sols_name=list(out_sols_name)
            out_sols_name.sort()
            out_sols_list=out_sols_name[:out_sols_num]
        else:
            out_sols_list=[]    
        to_use_sols_name=sols_list+out_sols_list

        combos=list(combinations(to_use_sols_name,num_of_ref_progs))
        combos.sort()
        if method_type=='dfp':
            tp,fp=0,0
            fp_bad_input=0
            for combo in combos:
                combo=list(combo)
                df_triger_pid['combo_all_true']=df_triger_pid[combo].all(axis=1)
                df_tmp=df_triger_pid[df_triger_pid['combo_all_true']]
                if len(df_tmp)<1:
                    continue
                tp+= len(df_tmp[df_tmp['final_valid']==True])/len(df_tmp)
                fp+= 1-len(df_tmp[df_tmp['final_valid']==True])/len(df_tmp)
                fp_bad_input+=len(df_tmp[df_tmp['input_valid']!=True])/len(df_tmp)
                if fp<0:
                    print(f"NOW TP:{tp},FP:{fp}")
                    print(len(df_tmp),len(df_tmp[df_tmp['final_valid']==True]),len(df_tmp[df_tmp['final_valid']==False]))
                    
            if tp==0 and fp==0:
                continue
            res_df.loc[len(res_df)]=[task_id,total,tp,fp,fp_bad_input]
        elif method_type=='tc':
            tp,fp=0,0
            fp_bad_input=0
            for combo in combos:
                combo=list(combo)    
                df_triger_pid['combo_any_true']=df_triger_pid[combo].any(axis=1)
                df_tmp=df_triger_pid[df_triger_pid['combo_any_true']].copy()
                if len(df_tmp)<1:
                    continue
                df_tmp['sols_in_combo_num'] = df_tmp.loc[:,combo].sum(axis=1)
                max_sols_in_combo = df_tmp.groupby('input_name')['sols_in_combo_num'].transform('max')
                df_tmp=df_tmp[df_tmp['sols_in_combo_num']==max_sols_in_combo]
                tp+=len(df_tmp[df_tmp['final_valid']==True])/len(df_tmp)
                fp+= 1 - len(df_tmp[df_tmp['final_valid']==True])/len(df_tmp)
                fp_bad_input+=len(df_tmp[df_tmp['input_valid']!=True])/len(df_tmp)
            if tp==0 and fp==0:
                continue
            res_df.loc[len(res_df)]=[task_id,total,tp,fp,fp_bad_input]
        else:
            raise RuntimeError(f"Wrong method_type: {method_type}")
    res_df['TP_rate']=res_df['TP']/res_df['total']
    res_df['FP_rate']=res_df['FP']/res_df['total']
    res_df['precision']=res_df['TP']/(res_df['TP']+res_df['FP'])
    res_df['FP_bad_input_rate']=res_df['FP_bad_input']/res_df['total']
    return res_df
