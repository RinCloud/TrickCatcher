# PROBLEM DESCRIPTION:
Find the smallest possible sum of the digits in the decimal notation of a positive multiple of K.

CONSTRAINTS:
* 2 <= K <= 10^5
* K is an integer.

INPUT:
Input is given from Standard Input in the following format:
K

OUTPUT:
Print the smallest possible sum of the digits in the decimal notation of a positive multiple of K.

EXAMPLES:

INPUT:
6

OUTPUT:
3

INPUT:
41

OUTPUT:
5

INPUT:
79992

OUTPUT:
36

**CODE**:
# -*- coding: utf-8 -*-


def loop(i):
    j = (10 * i) % K
    if dp[i] < dp[j-1] + 1 and dp[i] < dp[j]:
        dp[j] = dp[i]
    elif dp[j-1] + 1 < dp[i] and dp[j-1] + 1 < dp[j]:
        dp[j] = dp[j-1] + 1
    return j


K = int(input())

dp = [K + 1 for _ in range(K)]

dp[1] = 1
for i in range(1, K):
    if i == 1:
        continue
    else:
        dp[i] = min(dp[i-1] + 1, dp[i])
    l = i
    while True:
        l = loop(l)
        if l == i:
            break

dp[0] = min(dp[K - 1] + 1, dp[0])
print(dp[0])