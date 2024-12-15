# Program

s = input()

n = len(s)

k = n

for i in range(n - 1):
    if s[i] != s[i + 1]:
        k = min(k, max(i + 1, n - i - 1))

print(k)