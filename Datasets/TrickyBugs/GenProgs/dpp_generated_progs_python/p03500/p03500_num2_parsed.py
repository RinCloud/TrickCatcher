import sys

MOD = 10 ** 9 + 7

def main():
    N, K = map(int, sys.stdin.readline().split())
    A = list(map(int, sys.stdin.readline().split()))
    
    max_bit = max(max(A).bit_length(), K.bit_length())
    S = [[0] * (max_bit + 1) for _ in range(N)]
    
    for i in range(N):
        A[i] += 1
        for j in range(max_bit):
            S[i][j + 1] = S[i][j] + A[i] % 2
            A[i] //= 2
    
    dp = [[[0] * 2 for _ in range(max_bit + 1)] for _ in range(N + 1)]
    dp[0][0][0] = 1
    
    for i in range(N):
        for j in range(max_bit + 1):
            for k in range(K.bit_length() + 1):
                if dp[i][j][0] == 0 and dp[i][j][1] == 0:
                    continue
                
                if j < max_bit:
                    if (K >> j) & 1:
                        dp[i + 1][j + 1][1] += dp[i][j][1] * (S[i][j] + 1)
                        dp[i + 1][j + 1][1] %= MOD
                    else:
                        dp[i + 1][j + 1][0] += dp[i][j][1] * (S[i][j] + 1)
                        dp[i + 1][j + 1][0] %= MOD
                
                if (K >> k) & 1:
                    dp[i + 1][k][1] += dp[i][j][1] * max(S[i][k + 1], 0)
                    dp[i + 1][k][0] += dp[i][j][0] * max(S[i][k + 1], 0)
                    dp[i + 1][k][1] += dp[i][j][0] * max(S[i][k], 0)
                    dp[i + 1][k][1] %= MOD
                    dp[i + 1][k][0] %= MOD
                else:
                    dp[i + 1][k][0] += dp[i][j][0] * max(S[i][k], 0)
                    dp[i + 1][k][0] %= MOD
    
    ans = dp[N][max_bit][1] + dp[N][max_bit][0]
    ans %= MOD
    
    print(ans)

if __name__ == '__main__':
    main()