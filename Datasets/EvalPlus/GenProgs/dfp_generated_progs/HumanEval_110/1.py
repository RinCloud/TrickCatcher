def exchange(lst1, lst2):
    lst1_evens = [num for num in lst1 if num % 2 == 0]
    lst2_evens = [num for num in lst2 if num % 2 == 0]
    
    return "YES" if len(lst1_evens) == len(lst1) else "NO"