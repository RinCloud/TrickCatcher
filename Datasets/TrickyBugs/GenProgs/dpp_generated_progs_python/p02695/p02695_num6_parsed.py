import itertools

def max_score(N, M, Q, queries):
    max_score = 0
    for seq in itertools.combinations(range(1, M+1), N):
        score = 0
        for a, b, c, d in queries:
            if seq[b-1] - seq[a-1] == c:
                score += d
        max_score = max(max_score, score)
    return max_score

N, M, Q = map(int, input().split())
queries = []
for _ in range(Q):
    queries.append(list(map(int, input().split())))

print(max_score(N, M, Q, queries))