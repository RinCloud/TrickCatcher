def add(lst):
    ans = 0
    for i in range(1, len(lst), 2):
        if lst[i] % 2 == 0:
            ans += lst[i]
    return ans