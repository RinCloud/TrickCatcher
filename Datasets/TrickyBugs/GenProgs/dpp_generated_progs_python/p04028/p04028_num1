from collections import defaultdict

def count_ways(N, s):
    mod = 10**9 + 7
    dp = defaultdict(int)
    dp[0] = 1

    for i in range(N):
        dp_new = defaultdict(int)
        for j in range(len(s)):
            dp_new[j+1] += dp[j]
            dp_new[j+1] %= mod
            if j > 0 and s[j-1] == s[j]:
                dp_new[j+1] += dp[j]
                dp_new[j+1] %= mod
            if s[j] == '1':
                dp_new[j] += dp[j]
                dp_new[j] %= mod
        dp = dp_new

    ans = sum(dp.values()) % mod
    return ans

N = int(input())
s = input().strip()

result = count_ways(N, s)
print(result)