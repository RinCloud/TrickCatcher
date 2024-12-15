from typing import List

def minimum_mp(H: int, W: int, c: List[List[int]], A: List[List[int]]) -> int:
    INF = float('inf')
    costs = [[INF] * 10 for _ in range(10)]
    for i in range(10):
        for j in range(10):
            costs[i][j] = c[i][j]
    
    for k in range(10):
        for i in range(10):
            for j in range(10):
                costs[i][j] = min(costs[i][j], costs[i][k] + costs[k][j])
    
    ans = 0
    for i in range(H):
        for j in range(W):
            if A[i][j] != -1:
                ans += costs[A[i][j]][1]
    
    return ans


# Read input
H, W = map(int, input().split())
c = [list(map(int, input().split())) for _ in range(10)]
A = [list(map(int, input().split())) for _ in range(H)]

# Call the function and print the result
result = minimum_mp(H, W, c, A)
print(result)