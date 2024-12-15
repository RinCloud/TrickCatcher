def find_max(a):
    n = len(a)

    if n <= 3:
        return max(a)

    dp = [[-(1 << 64)] * (2 + n % 2) for _ in range(n)]

    for i in range(2 + n % 2):
        dp[i][i] = a[i]
        dp[i + 1][i] = a[i]

    for i in range(2, n):
        for j in range(2 + n % 2):
            for extra_space in range(j + 1):
                curr_sum = dp[i - (2 + extra_space)][j - extra_space] + a[i]
                if curr_sum > dp[i][j]:
                    dp[i][j] = curr_sum

    return dp[-1][1 + n % 2]


def main():
    _ = int(input())
    a = list(map(int, input().split()))

    print(find_max(a))


main()