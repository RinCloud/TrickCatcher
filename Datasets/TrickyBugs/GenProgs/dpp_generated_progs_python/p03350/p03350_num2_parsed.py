N, K = map(int, input().split())
S = [input() for _ in range(N+1)]

def is_subsequence(string, s):
    n = len(string)
    m = len(s)
    i = 0
    j = 0
    while i < n and j < m:
        if string[i] == s[j]:
            j += 1
        i += 1
    return j == m

def longest_common_string(strings):
    n = len(strings)
    lengths = [len(s) for s in strings]

    dp = [[0] * (n+1) for _ in range(n+1)]
    for i in range(1, n+1):
        for j in range(i+1, n+1):
            dp[i][j] = dp[i-1][j-1] + (1 if is_subsequence(strings[i-1], strings[j-1]) else 0)

    result = ""
    for i in range(1, n+1):
        count = 0
        for j in range(1, n+1):
            if dp[j][i] >= K:
                count += 1
                if count == K:
                    result = strings[i-1]
                    break
    return result

result = longest_common_string(S)
print(result)