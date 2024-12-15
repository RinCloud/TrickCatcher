# -*- coding: utf-8 -*-


def loop(i):
    j = (10 * i) % K
    if dp[i-K] < dp[j-K-1] + 1 and dp[i-K] < dp[j-K]:
        dp[j-K] = dp[i-K]
        return j, True
    if dp[j-K-1] + 1 < dp[i-K] and dp[j-K-1] + 1 < dp[j-K]:
        dp[j-K] = dp[j-K-1] + 1
        return j, True
    return j, False


K = int(input())

dp = [K + 1 for _ in range(K)]

dp[0] = 1
for i in range(0, K):
    if i == 0:
        pass
    else:
        dp[i] = min(dp[i-1] + 1, dp[i])
    l = i
    while True:
        l, updated = loop(l)
        if not updated:
            break

dp[0] = min(dp[K - 1] + 1, dp[0])
print(dp[0])