def exchange(lst1, lst2):
    odd_count = 0
    for num in lst1:
        if num % 2 != 0:
            odd_count += 1
    return "YES" if odd_count == 0 else "NO"