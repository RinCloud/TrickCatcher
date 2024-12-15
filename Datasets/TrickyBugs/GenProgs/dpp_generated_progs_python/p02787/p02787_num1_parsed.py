import sys

def solve(H, N, spells):
    dp = [float('inf')] * (H + 1)
    dp[0] = 0

    for i in range(N):
        for j in range(H + 1):
            dp[j] = min(dp[j], dp[max(0, j - spells[i][0])] + spells[i][1])

    return dp[H]

def main():
    H, N = map(int, input().split())
    spells = []

    for _ in range(N):
        A, B = map(int, input().split())
        spells.append((A, B))

    result = solve(H, N, spells)
    print(result)

if __name__ == '__main__':
    main()