n = int(input())
s = []
for _ in range(n):
    s.append(input())

l = ''
for i in range(26):
    t = float('inf')
    for j in range(n):
        t = min(t, s[j].count(chr(97 + i)))
    l += chr(97 + i) * t

print(l)
