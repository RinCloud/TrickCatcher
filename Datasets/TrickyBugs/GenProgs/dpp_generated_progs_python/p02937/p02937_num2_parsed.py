s = input()
t = input()

times = (10 ** 100) // len(s)

s_prime = s * times

i = 0
j = 0

while i < len(s_prime) and j < len(t):
    if s_prime[i] == t[j]:
        j += 1
    i += 1

if j == len(t):
    min_i = i // len(s)
    print(min_i)
else:
    print(-1)