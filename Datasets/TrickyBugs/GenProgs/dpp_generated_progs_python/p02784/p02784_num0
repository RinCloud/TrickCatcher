import sys

def can_win(H, N, moves):
    dp = [False] * (H+1)
    dp[0] = True

    for i in range(1, H+1):
        for move in moves:
            if i - move >= 0 and dp[i - move]:
                dp[i] = True
                break

    if dp[H]:
        print("Yes")
    else:
        print("No")

def main():
    H, N = map(int, sys.stdin.readline().split())
    moves = list(map(int, sys.stdin.readline().split()))
    can_win(H, N, moves)

if __name__ == "__main__":
    main()