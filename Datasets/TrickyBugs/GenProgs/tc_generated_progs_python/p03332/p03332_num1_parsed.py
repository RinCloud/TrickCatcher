n, a, b, k = map(int, input().split())
MOD = 998244353

maxA = min(n, k // a)
result = 0

for i in range(maxA + 1):
    if (k - a * i) % b == 0:
        j = (k - a * i) // b
        if j <= n:
            result += 1

print(result % MOD)
