import sys

MOD = 10**9 + 7

def solve(N, h):
    dp = [[0] * 2 for _ in range(N+1)]
    dp[0][0] = 1
    
    for i in range(1, N+1):
        for j in range(h[i-1]):
            dp[i][0] += dp[i-1][1]
            dp[i][1] += dp[i-1][0]
            dp[i][0] %= MOD
            dp[i][1] %= MOD
    
    return (dp[N][0] + dp[N][1]) % MOD

def main():
    N = int(sys.stdin.readline().strip())
    h = list(map(int, sys.stdin.readline().strip().split()))
    
    ans = solve(N, h)
    print(ans)

if __name__ == "__main__":
    main()