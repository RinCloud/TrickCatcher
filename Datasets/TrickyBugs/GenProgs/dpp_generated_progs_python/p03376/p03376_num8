from typing import List, Tuple

def maximum_doughnuts(N: int, X: int, D: int, recipes: List[Tuple[int, int]]) -> int:
    dp = [[0] * (X+1) for _ in range(N+1)]
    dp[0][0] = 1
    for i in range(1, N+1):
        for j in range(X+1):
            for k in range(j+1):
                if dp[i-1][j-k] and (k + D >= recipes[i-1][0] or i == 1):
                    dp[i][j] = max(dp[i][j], dp[i-1][j-k] + (j-k) // recipes[i-1][0])

    return max(dp[-1])

N, X, D = map(int, input().split())
recipes = [tuple(map(int, input().split())) for _ in range(N)]

result = maximum_doughnuts(N, X, D, recipes)
print(result)