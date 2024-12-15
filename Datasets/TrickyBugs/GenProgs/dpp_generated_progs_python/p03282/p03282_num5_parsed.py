s, k = input().split()
s = list(s)
k = int(k)

for _ in range(5 * 10**15):
    for i in range(len(s)):
        if s[i] != '1':
            s[i] = s[i] * int(s[i])

print(s[k-1])