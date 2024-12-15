def next_smallest(lst):
    if len(lst) < 2:
        return None
    
    unique_nums = list(set(lst))
    if len(unique_nums) < 2:
        return None
    
    unique_nums.sort()
    return unique_nums[1]