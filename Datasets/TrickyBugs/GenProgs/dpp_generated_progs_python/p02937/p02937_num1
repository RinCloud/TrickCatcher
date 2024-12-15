s = input().strip()
t = input().strip()

s_len = len(s)
t_len = len(t)

s_prime = s * (10 ** 100)

i = 0
j = 0

while i < len(s_prime) and j < t_len:
    if s_prime[i] == t[j]:
        j += 1
    i += 1

if j == t_len:
    print(i // s_len)
else:
    print(-1)