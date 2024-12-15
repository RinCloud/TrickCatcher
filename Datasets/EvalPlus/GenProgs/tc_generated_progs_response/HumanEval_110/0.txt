def exchange(lst1, lst2):
    if len(lst1) != len(lst2):
        return "NO"
    
    odd_indices = [i for i in range(len(lst1)) if lst1[i] % 2 != 0]
    even_indices = [i for i in range(len(lst2)) if lst2[i] % 2 == 0]
    
    if len(odd_indices) > len(even_indices):
        return "NO"
    
    for i in odd_indices:
        for j in even_indices:
            if lst1[i] % 2 != 0 and lst2[j] % 2 == 0:
                lst1[i], lst2[j] = lst2[j], lst1[i]
                break
        else:
            return "NO"
    
    return "YES"