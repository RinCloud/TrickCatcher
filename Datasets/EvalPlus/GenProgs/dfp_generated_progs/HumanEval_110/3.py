def exchange(lst1, lst2):
    count = 0
    for num in lst1:
        if num % 2 != 0:
            count += 1
    for num in lst2:
        if num % 2 == 0:
            count -= 1
    if count <= 0:
        return "YES"
    else:
        return "NO"