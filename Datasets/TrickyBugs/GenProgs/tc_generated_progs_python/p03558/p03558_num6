# -*- coding: utf-8 -*-

def loop(i, dp):
    j = (10 * i) % K
    if dp[i] < dp[j-1] + 1 and dp[i] < dp[j]:
        dp[j] = dp[i]
        return j, True
    if dp[j-1] + 1 < dp[i] and dp[j-1] + 1 < dp[j]:
        dp[j] = dp[j-1] + 1
        return j, True
    return j, False


K = int(input())

dp = [K + 1 for _ in range(K)]

dp[1] = 1
for i in range(1, K):
    if i == 1:
        continue
    dp[i] = min(dp[i-1] + 1, dp[i])
    l = i
    while True:
        l, updated = loop(l, dp)
        if not updated:
            break

dp[0] = min(dp[K - 1] + 1, dp[0])
print(dp[0])