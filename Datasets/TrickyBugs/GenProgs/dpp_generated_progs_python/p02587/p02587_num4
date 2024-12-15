import sys

def min_cost_palindrome(N, strings):
    dp = [[float('inf')] * (N+1) for _ in range(N+1)]
    dp[0][0] = 0

    for i in range(N+1):
        for j in range(1, N+1):
            if i > 0:
                cost = strings[i-1][1] * (j - (N-i))
                dp[i][j] = min(dp[i][j], dp[i-1][j] + cost)

            if i > 0 and j > 0:
                if strings[i-1][0] == strings[j-1][0]:
                    cost = strings[i-1][1] + strings[j-1][1]
                    dp[i][j] = min(dp[i][j], dp[i-1][j-1] + cost)

    ans = float('inf')
    for i in range(N+1):
        ans = min(ans, dp[i][N-i])

    if ans == float('inf'):
        return -1
    else:
        return ans

def main():
    N = int(input().strip())
    strings = []
    for _ in range(N):
        s, c = input().strip().split()
        strings.append((s, int(c)))

    ans = min_cost_palindrome(N, strings)
    print(ans)

if __name__ == '__main__':
    main()