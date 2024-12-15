def total_match(lst1, lst2):
    if sum(len(x) for x in lst1) < sum(len(x) for x in lst2):
        return lst1
    elif sum(len(x) for x in lst1) == sum(len(x) for x in lst2):
        return lst1
    else:
        return lst2