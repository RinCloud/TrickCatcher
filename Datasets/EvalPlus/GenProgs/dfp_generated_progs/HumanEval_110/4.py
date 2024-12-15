def exchange(lst1, lst2):
    lst1_even = [i for i in lst1 if i % 2 == 0]
    lst2_even = [i for i in lst2 if i % 2 == 0]
    return "YES" if len(lst1_even) == len(lst1) else "NO"