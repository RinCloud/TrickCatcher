def exchange(lst1, lst2):
    if len(lst1) != len(lst2):
        return "NO"
    for i in range(len(lst1)):
        if lst1[i] % 2 != 0:
            for j in range(len(lst2)):
                if lst2[j] % 2 == 0:
                    lst1[i], lst2[j] = lst2[j], lst1[i]
                    break
            else:
                return "NO"
    if all(num % 2 == 0 for num in lst1):
        return "YES"
    else:
        return "NO"