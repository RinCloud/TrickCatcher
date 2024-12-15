import sys

def can_win(h, n, moves):
    dp = [False] * (h + 1)
    dp[0] = True

    for i in range(1, h + 1):
        for move in moves:
            if i - move >= 0 and dp[i - move]:
                dp[i] = True
                break

    return "Yes" if dp[h] else "No"

if __name__ == "__main__":
    h, n = map(int, sys.stdin.readline().split())
    moves = list(map(int, sys.stdin.readline().split()))
    print(can_win(h, n, moves))