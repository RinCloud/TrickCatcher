def total_match(lst1, lst2):
    return lst1 if sum(len(s) for s in lst1) <= sum(len(s) for s in lst2) else lst2