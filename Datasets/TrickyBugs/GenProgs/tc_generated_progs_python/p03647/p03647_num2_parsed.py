def getinputdata():

    # 配列初期化
    array_result = []
    
    data = input()
    
    array_result.append(data.split(" "))

    flg = True

    try:

        while flg:

            data = input()

            if(data != ""):
                
                array_result.append(data.split(" "))

            else:

                flg = False
    finally:


        return array_result

arr_data = getinputdata()

#島数
n = int(arr_data[0][0])  # Convert string to integer
m = int(arr_data[0][1])

arr01 = []
arr02 = []
for i in range(1, 1 + m):

    if arr_data[i][0] == "1":
        
        arr01.append(arr_data[i][1])

    if arr_data[i][1] == "N":  # Compare with string value
        
        arr02.append(arr_data[i][0])


print("POSSIBLE" if len(list(set(arr01) & set(arr02))) == 1 else "IMPOSSIBLE")
