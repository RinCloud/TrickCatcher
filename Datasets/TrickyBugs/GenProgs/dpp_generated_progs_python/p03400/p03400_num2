from typing import List

def chocolate_pieces(N: int, D: int, X: int, A: List[int]) -> int:
    chocolate_count = X

    for i in range(N):
        day = 1
        while day <= D:
            chocolate_count += 1
            day += A[i] + 1

    return chocolate_count

N = int(input())
D, X = map(int, input().split())
A = [int(input()) for _ in range(N)]

result = chocolate_pieces(N, D, X, A)
print(result)