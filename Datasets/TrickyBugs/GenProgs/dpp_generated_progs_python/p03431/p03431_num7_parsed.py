# taking input
n, k = map(int, input().split())

MOD = 998244353

# if n == 1, then only one way is possible to throw in balls
if n == 1:
    print(1)
    exit()

# if k == 1, then no way is possible to throw in balls
if k == 1:
    print(0)
    exit()

# initialize dp array with all zeros
dp = [0] * (n + 1)
dp[0] = 1

# calculate the cumulative sum of dp
for i in range(k):
    for j in range(n):
        dp[j + 1] += dp[j]
        dp[j + 1] %= MOD

# calculate the result modulo 998244353
res = 0
for i in range(n):
    res += dp[i]
    res %= MOD

print(res)