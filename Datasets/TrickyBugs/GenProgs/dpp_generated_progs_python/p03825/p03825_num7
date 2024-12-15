n, m, k = map(int, input().split())

mod = 10**9 + 7

ans = 0

for i in range(1, n + 1):
    for j in range(1, m + 1):
        if (i + j - 1) % (k - 1) == 0:
            a = pow(i, n, mod)
            b = pow(j, m, mod)
            ans = (ans + a * b) % mod

print(ans)