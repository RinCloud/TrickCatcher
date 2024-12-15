from typing import List

def max_total_score(N: int, K: int, R: int, S: int, P: int, T: str) -> int:
    score = 0
    for i in range(N):
        if i >= K and T[i] == T[i-K]:
            T[i] = 'x'
        if T[i] == 'r':
            score += P
        elif T[i] == 's':
            score += R
        elif T[i] == 'p':
            score += S
    return score

N, K = map(int, input().split())
R, S, P = map(int, input().split())
T = input().strip()

print(max_total_score(N, K, R, S, P, T))