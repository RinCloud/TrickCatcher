def exchange(lst1, lst2):
    if len(lst1) != len(lst2):
        return "NO"
    
    even_count = sum(1 for num in lst1 if num % 2 == 0)
    if even_count == len(lst1):
        return "YES"
    
    return "NO"