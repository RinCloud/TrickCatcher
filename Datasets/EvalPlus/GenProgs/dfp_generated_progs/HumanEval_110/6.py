def exchange(lst1, lst2):
    odd_count = 0
    for num in lst1:
        if num % 2 != 0:
            odd_count += 1
    
    if odd_count > len(lst2):
        return "NO"
    else:
        return "YES"