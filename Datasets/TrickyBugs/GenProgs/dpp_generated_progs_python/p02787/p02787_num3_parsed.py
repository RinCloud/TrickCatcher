from typing import List, Tuple

def minimum_magic_points(H: int, N: int, spells: List[Tuple[int, int]]) -> int:
    dp = [float('inf')] * (H + 1)
    dp[0] = 0

    for i in range(1, H + 1):
        for a, b in spells:
            if i - a >= 0:
                dp[i] = min(dp[i], dp[i - a] + b)
    
    return dp[H]

if __name__ == "__main__":
    H, N = map(int, input().split())
    spells = [tuple(map(int, input().split())) for _ in range(N)]
    print(minimum_magic_points(H, N, spells))