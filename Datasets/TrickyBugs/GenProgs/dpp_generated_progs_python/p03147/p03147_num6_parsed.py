from typing import List

def min_watering_operations(N: int, h: List[int]) -> int:
    operations = 0
    for i in range(1, N):
        if h[i] > h[i-1]:
            operations += h[i] - h[i-1]
    return operations

N = int(input())
h = list(map(int, input().split()))

print(min_watering_operations(N, h))