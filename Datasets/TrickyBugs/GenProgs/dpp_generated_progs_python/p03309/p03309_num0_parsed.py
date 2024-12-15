from typing import List

def calculate_sadness(N: int, A: List[int]) -> int:
    min_sadness = float('inf')
    for b in range(1, N+1):
        sadness = 0
        for i in range(N):
            sadness += abs(A[i] - (b+i))
        min_sadness = min(min_sadness, sadness)
    return min_sadness

N = int(input())
A = list(map(int, input().split()))

print(calculate_sadness(N, A))