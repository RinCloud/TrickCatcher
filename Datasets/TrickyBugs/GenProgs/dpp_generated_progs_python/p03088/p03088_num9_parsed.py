MOD = 10**9+7

def count_strings(N):
    dp = [[[0] * 4 for _ in range(4)] for _ in range(4)]
    dp[3][3][3] = 1
    
    for n in range(N):
        new_dp = [[[0] * 4 for _ in range(4)] for _ in range(4)]
        for a in range(4):
            for b in range(4):
                for c in range(4):
                    for d in range(4):
                        if detecting_illegal(a, b, c, d): 
                            continue
                        new_dp[b][c][d] += dp[a][b][c]
                        new_dp[b][c][d] %= MOD
        dp = new_dp

    ans = 0
    for a in range(4):
        for b in range(4):
            for c in range(4):
                ans += dp[a][b][c]
                ans %= MOD
    return ans

def detecting_illegal(a, b, c, d):
    if b == 0 and c == 2 and d == 1:
        return True
    if b == 0 and c == 1 and d == 2:
        return True
    if b == 2 and c == 0 and d == 1:
        return True
    if a == 0 and b == 2 and d == 1:
        return True
    if a == 0 and c == 2 and d == 1:
        return True
    return False

N = int(input())
print(count_strings(N))