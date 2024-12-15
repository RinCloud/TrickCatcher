N, M = map(int, input().split())
MOD = 10**9 + 7

# calculate prime factorization of M
factors = []
for i in range(2, int(M**0.5) + 1):
    if M % i == 0:
        cnt = 0
        while M % i == 0:
            M //= i
            cnt += 1
        factors.append(cnt)
if M > 1:
    factors.append(1)

# calculate the count of sequences
count = 1
for cnt in factors:
    count *= pow(N + cnt - 1, cnt, MOD)
    count %= MOD

print(count)