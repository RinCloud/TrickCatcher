import sys

def main():
    N, X, Y = map(int, sys.stdin.readline().split())
    ball_colors = []
    ball_weights = []

    for _ in range(N):
        c, w = map(int, sys.stdin.readline().split())
        ball_colors.append(c)
        ball_weights.append(w)

    mod = pow(10, 9) + 7

    color_counts = [0] * (N + 1)
    for color in ball_colors:
        color_counts[color] += 1

    max_weight = max(ball_weights)

    dp = [[0] * (Y + 1) for _ in range(N + 1)]
    dp[0][0] = 1

    for i in range(1, N + 1):
        for j in range(Y + 1):
            dp[i][j] = (dp[i][j] + dp[i - 1][j]) % mod
            if j >= ball_weights[i - 1] and color_counts[i] > 1:
                dp[i][j] = (dp[i][j] + dp[i - 1][j - ball_weights[i - 1]] * color_counts[i] % mod) % mod

    answer = 0
    for j in range(X + 1, Y + 1):
        answer = (answer + dp[N][j]) % mod

    print(answer)

if __name__ == '__main__':
    main()