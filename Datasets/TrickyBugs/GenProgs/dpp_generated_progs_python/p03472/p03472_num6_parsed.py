import sys

def min_attacks(N, H, katana):
    inf = float('inf')
    dp = [inf] * (H + 1)
    dp[0] = 0

    for i in range(1, H + 1):
        for a, b in katana:
            if i - b >= 0:
                dp[i] = min(dp[i], dp[i - b] + 1)
            if i - a >= 0:
                dp[i] = min(dp[i], dp[i - a])

    return dp[H]

def main():
    N, H = map(int, sys.stdin.readline().split())
    katana = []
    for _ in range(N):
        a, b = map(int, sys.stdin.readline().split())
        katana.append((a, b))

    result = min_attacks(N, H, katana)
    print(result)

if __name__ == "__main__":
    main()