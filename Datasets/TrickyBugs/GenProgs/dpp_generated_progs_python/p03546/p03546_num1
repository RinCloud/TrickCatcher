from typing import List, Tuple

def minimum_mp(H: int, W: int, c: List[List[int]], A: List[List[int]]) -> int:
    # Floyd-Warshall Algorithm for all-pairs shortest path
    for k in range(10):
        for i in range(10):
            for j in range(10):
                c[i][j] = min(c[i][j], c[i][k] + c[k][j])

    # Calculate the total MP required to turn every digit into 1
    total_mp = 0
    for i in range(H):
        for j in range(W):
            if A[i][j] != -1:
                total_mp += c[A[i][j]][1]

    return total_mp

# Read input
H, W = map(int, input().split())
c = []
for _ in range(10):
    c.append(list(map(int, input().split())))
A = []
for _ in range(H):
    A.append(list(map(int, input().split())))

# Calculate and print the minimum total amount of MP required
result = minimum_mp(H, W, c, A)
print(result)