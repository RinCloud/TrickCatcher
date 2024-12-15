import sys

MOD = 998244353

def main():
    N = int(input())
    AB = []
    for _ in range(N):
        A, B = map(int, input().split())
        AB.append((A, B))
    
    S = sum(A for A, _ in AB)
    pow_S = [pow(S, MOD-2, MOD)]
    for i in range(1, N+1):
        pow_S.append(pow_S[-1] * pow(S+i, MOD-2, MOD) % MOD)
    
    dp = [[0]*(S+1) for _ in range(N+1)]
    dp[0][0] = 1
    for i in range(N):
        A, B = AB[i]
        for j in range(i+1):
            for k in range(S+1-A):
                dp[j+1][k+A] += dp[j][k] * pow_S[i+1] % MOD
                dp[j+1][k+A] %= MOD

    ans = 0
    for i in range(N):
        A, B = AB[i]
        for j in range(B, S+1):
            ans += dp[i+1][j] * dp[i][j] % MOD
            ans %= MOD

    print(ans)

if __name__ == '__main__':
    main()