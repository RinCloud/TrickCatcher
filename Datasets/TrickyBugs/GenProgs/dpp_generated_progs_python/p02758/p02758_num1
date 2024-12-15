import sys

MOD = 998244353

def main():
    N = int(sys.stdin.readline())
    robots = []
    for _ in range(N):
        X, D = map(int, sys.stdin.readline().split())
        robots.append((X, D))
    robots.sort()

    dp = [0] * (N + 1)
    for i in range(N - 1, -1, -1):
        dp[i] = (dp[i + 1] * 2) % MOD
        j = i + 1
        while j < N and robots[j][0] < robots[i][0] + robots[i][1]:
            dp[i] = (dp[i] - dp[j]) % MOD
            j += 1
        dp[i] = (dp[i] + 1) % MOD

    ans = 0
    for i in range(N):
        ans = (ans + dp[i]) % MOD
    print(ans)

if __name__ == '__main__':
    main()