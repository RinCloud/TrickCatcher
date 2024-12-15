s = input()

n = len(s)
k = n

for i in range(n):
    if s[i] == '1':
        k = min(k, max(i+1, n-i))

print(k)