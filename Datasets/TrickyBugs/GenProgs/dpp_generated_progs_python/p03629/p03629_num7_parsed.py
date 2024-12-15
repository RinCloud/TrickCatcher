import numpy as np

def find_shortest_non_subsequence(s):
    n = len(s)
    dp = np.zeros((26, n+1), dtype=int) + n
    for i in range(n-1, -1, -1):
        for j in range(26):
            dp[j][i] = dp[j][i+1]
        dp[ord(s[i]) - ord('a')][i] = i
    
    ans = ""
    i = 0
    while len(ans) < 26:
        found = False
        for j in range(26):
            if dp[j][i] == n:
                ans += chr(ord('a') + j)
                i = dp[j][i-1] + 1
                found = True
                break
        if not found:
            break
    
    return ans[:26]


A = input()
result = find_shortest_non_subsequence(A)
print(result)
