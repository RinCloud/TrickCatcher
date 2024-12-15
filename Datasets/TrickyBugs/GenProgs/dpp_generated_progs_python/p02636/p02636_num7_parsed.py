MOD = 998244353

def count_strings(S):
    n = len(S)
    counts = [[0] * n for _ in range(n)]
    
    for i in range(n - 2):
        if S[i] == S[i + 1]:
            counts[i][i + 2] = 1
    
    for l in range(4, n + 1, 2):
        for i in range(n - l + 1):
            for j in range(i + 2, i + l, 2):
                if S[i] == S[j]:
                    counts[i][i + l] += counts[i + 2][j] * counts[j + 2][i + l]
                    counts[i][i + l] %= MOD
    
    return counts[0][n]

S = input()
result = count_strings(S)
print(result)