import sys
mod = 10 ** 9 + 7

def main():
    N, M = map(int, input().split())
    A = list(map(int, input().split()))

    dp = [0] * (2 ** N)
    dp[0] = 1

    for i in range(1, 2 ** N):
        if i in A:
            dp[i] = dp[i // 2]
        else:
            dp[i] = dp[i // 2] * 2

    print(dp[-1] % mod)

if __name__ == '__main__':
    main()