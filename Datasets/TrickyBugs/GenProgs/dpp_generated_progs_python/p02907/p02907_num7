import sys

MOD = 998244353

def main():
    # Read input
    N = int(sys.stdin.readline())
    AB = [list(map(int, sys.stdin.readline().split())) for _ in range(N)]

    # Calculate sum of A_i and B_i
    S = sum(A for A, _ in AB)
    T = sum(B for _, B in AB)

    # Initialize the dp table
    dp = [[0] * (T + 1) for _ in range(N)]
    dp[0][0] = 1

    # Calculate the dp table
    for i in range(N - 1):
        for j in range(T + 1):
            if j + AB[i][1] <= T:
                dp[i + 1][j + AB[i][1]] += dp[i][j] * AB[i][0] % MOD
                dp[i + 1][j + AB[i][1]] %= MOD
            dp[i + 1][j] += dp[i][j] * (S - AB[i][0]) % MOD
            dp[i + 1][j] %= MOD

    # Calculate the answer
    ans = 0
    for j in range(T + 1):
        ans += dp[N - 1][j] * (S - AB[N - 1][0]) % MOD
        ans %= MOD

    # Print the answer
    print(ans)

if __name__ == "__main__":
    main()