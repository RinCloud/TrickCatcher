import sys

MOD = 998244353

def count_sequences(N, S, A):
    dp = [[0] * (S + 1) for _ in range(N + 1)]
    dp[0][0] = 1

    for i in range(1, N + 1):
        for j in range(S + 1):
            dp[i][j] = (2 * dp[i - 1][j]) % MOD
            if j - A[i - 1] >= 0:
                dp[i][j] = (dp[i][j] + dp[i - 1][j - A[i - 1]]) % MOD

    ans = 0
    for i in range(1, N + 1):
        for j in range(i, N + 1):
            ans = (ans + dp[j][S]) % MOD

    return ans

def main():
    input_str = sys.stdin.read().strip().split('\n')
    N, S = map(int, input_str[0].split())
    A = list(map(int, input_str[1].split()))

    ans = count_sequences(N, S, A)
    print(ans)

if __name__ == '__main__':
    main()