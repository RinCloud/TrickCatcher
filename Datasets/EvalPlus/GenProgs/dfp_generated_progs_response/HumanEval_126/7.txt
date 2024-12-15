def is_sorted(lst):
    # check if the list has more than 1 duplicate
    for num in lst:
        if lst.count(num) > 1:
            return False
        
    # check if the list is sorted in ascending order
    for i in range(len(lst) - 1):
        if lst[i] > lst[i + 1]:
            return False
        
    return True