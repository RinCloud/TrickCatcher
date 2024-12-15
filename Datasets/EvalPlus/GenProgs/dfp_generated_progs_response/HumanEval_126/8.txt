def is_sorted(lst):
    count_dict = {}
    for num in lst:
        if num not in count_dict:
            count_dict[num] = 1
        else:
            count_dict[num] += 1
    
    if max(count_dict.values()) > 1:
        return False
    
    return lst == sorted(lst)