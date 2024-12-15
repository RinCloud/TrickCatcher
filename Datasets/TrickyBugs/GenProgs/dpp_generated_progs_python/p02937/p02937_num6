s = input().strip()
t = input().strip()

n = len(s)
m = len(t)

if n % m != 0:
    k = n // m + 1
else:
    k = n // m

s_prime = s * k

i = 0
j = 0

while i < len(s_prime) and j < len(t):
    if s_prime[i] == t[j]:
        j += 1
    i += 1

if j == len(t):
    print(i // n)
else:
    print(-1)