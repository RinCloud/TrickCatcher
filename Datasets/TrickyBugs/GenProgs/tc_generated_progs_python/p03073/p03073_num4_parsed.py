s = list(map(int, input()))
a = 0
for i in range(1, len(s)):
    a += s[i] == s[i-1]
    s[i] = 1 - s[i-1]
print(a)