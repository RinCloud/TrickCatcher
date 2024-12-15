def main():
    mod = 998244353

    N = int(input())
    AB = [list(map(int, input().split())) for _ in range(N)]

    dp = [1] + [0] * 500
    S = [0] * 500
    S[0] = 1

    for i in range(N):
        A, B = AB[i]
        for j in range(i+1, -1, -1):
            dp[j] %= mod
            for k in range(1, B+1):
                if j+k >= S[i] and j+k-S[i] <= A:
                    dp[j+k] += dp[j]
                    if dp[j+k] >= mod:
                        dp[j+k] -= mod

        S[i+1] = S[i] + A

    ans = 0
    for i in range(S[N]):
        ans += i * dp[i]

    ans %= mod
    print(ans)

if __name__ == '__main__':
    main()