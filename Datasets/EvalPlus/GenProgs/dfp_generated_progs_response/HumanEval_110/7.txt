def exchange(lst1, lst2):
    odd_count = 0
    for num in lst1:
        if num % 2 != 0:
            odd_count += 1
    
    if odd_count % 2 == 0:
        return "YES"
    else:
        return "NO"