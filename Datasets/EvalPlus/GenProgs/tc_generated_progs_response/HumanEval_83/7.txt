def starts_one_ends(n):
    count = 0
    for i in range(10**(n-1), 10**n):
        if str(i)[0] == '1' or str(i)[-1] == '1':
            count += 1
    return count