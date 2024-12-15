import sys

MOD = 998244353

def sum_f_lr(n, s, a):
    dp = [[0] * (s + 1) for _ in range(n + 1)]
    dp[0][0] = 1

    for i in range(1, n + 1):
        for j in range(s + 1):
            dp[i][j] = (2 * dp[i - 1][j]) % MOD
            if j >= a[i - 1]:
                dp[i][j] = (dp[i][j] + dp[i - 1][j - a[i - 1]]) % MOD

    return sum(dp[n]) % MOD

def main():
    n, s = map(int, input().split())
    a = list(map(int, input().split()))

    result = sum_f_lr(n, s, a)
    print(result)

if __name__ == "__main__":
    main()