def find_subsequence(s, t):
    n = len(s)
    m = len(t)
    i = 0
    j = 0
    while i < n and j < m:
        if s[i] == t[j]:
            j += 1
        i += 1
    if j == m:
        return (i + 10**100 - 1) // n + 1
    else:
        return -1

s = input()
t = input()
print(find_subsequence(s, t))
