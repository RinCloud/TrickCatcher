from itertools import combinations_with_replacement

N, M, Q = map(int, input().split())
queries = [list(map(int, input().split())) for _ in range(Q)]

max_score = 0
for sequence in combinations_with_replacement(range(1, M+1), N):
    score = 0
    for a, b, c, d in queries:
        if sequence[b-1] - sequence[a-1] == c:
            score += d
    max_score = max(max_score, score)

print(max_score)