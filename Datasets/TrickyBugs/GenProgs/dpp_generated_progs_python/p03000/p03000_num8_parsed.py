from typing import List

def count_bounces(N: int, X: int, L: List[int]) -> int:
    count = 1  # ball always starts at coordinate 0, so first bounce is always counted
    coordinate = 0

    for i in range(N):
        coordinate += L[i]
        if coordinate <= X:
            count += 1

    return count

N, X = map(int, input().split())
L = list(map(int, input().split()))

print(count_bounces(N, X, L))