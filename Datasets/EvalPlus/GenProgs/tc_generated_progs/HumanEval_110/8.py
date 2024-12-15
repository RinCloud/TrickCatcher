def exchange(lst1, lst2):
    if len(lst1) != len(lst2):
        return "NO"
    
    odd_values_lst1 = [i for i in lst1 if i % 2 != 0]
    even_values_lst2 = [j for j in lst2 if j % 2 == 0]
    
    if len(odd_values_lst1) > len(even_values_lst2):
        return "NO"
    
    return "YES"