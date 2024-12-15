import sys

def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)

def solve(N, Ma, Mb, packages):
    inf = float('inf')
    MAX_C = N * 10 + 1
    dp = [[[inf] * MAX_C for i in range(MAX_C)] for j in range(N+1)]
    dp[0][0][0] = 0

    for i in range(N):
        ai, bi, ci = packages[i]
        for j in range(MAX_C):
            for k in range(MAX_C):
                if dp[i][j][k] == inf:
                    continue
                dp[i+1][j][k] = min(dp[i+1][j][k], dp[i][j][k])
                dp[i+1][j+ai][k+bi] = min(dp[i+1][j+ai][k+bi], dp[i][j][k] + ci)

    ans = inf
    for j in range(1, MAX_C):
        for k in range(1, MAX_C):
            if j * Mb == k * Ma:
                ans = min(ans, dp[N][j][k])

    if ans == inf:
        return -1
    return ans

def main():
    N, Ma, Mb = map(int, input().split())
    packages = []
    for i in range(N):
        ai, bi, ci = map(int, input().split())
        packages.append((ai, bi, ci))

    ans = solve(N, Ma, Mb, packages)
    print(ans)

if __name__ == "__main__":
    main()