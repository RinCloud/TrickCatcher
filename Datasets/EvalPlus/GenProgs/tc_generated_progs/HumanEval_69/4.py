def search(lst):
    if lst == []:
        return -1
    freq = [0] * (max(lst) + 1)
    for x in lst:
        freq[x] += 1
    for i in range(len(freq)-1, 0, -1):
        if freq[i] >= i:
            return i
    return -1