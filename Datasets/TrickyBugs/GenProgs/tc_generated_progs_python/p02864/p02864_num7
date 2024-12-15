**Repaired code**:


def main():
    N, K = (int(i) for i in input().split())
    H = [0] + [int(i) for i in input().split()]
    # 1-indexed
    if N == K:
        return print(0)
    elif K == 0:
        ans = 0
        for i in range(N):
            ans += max(H[i+1] - H[i], 0)
        return print(ans)
    dp = [[10**12]*(N-K+1) for _ in range(N+1)]

    for x in range(N+1):
        dp[x][1] = H[x]

    for y in range(2, N-K+1):
        for x in range(N+1):
            for i in range(1, x):
                dp[x][y] = min(dp[x][y], dp[i][y-1] + max(0, H[x] - H[i]))
                
    ans = dp[N][N-K]
    for i in range(1, N+1):
        ans = min(ans, dp[i][N-K])
    print(ans)


if __name__ == '__main__':
    main()