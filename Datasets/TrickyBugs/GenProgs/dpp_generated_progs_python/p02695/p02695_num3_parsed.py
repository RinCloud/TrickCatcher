import itertools

N, M, Q = map(int, input().split())
quads = []
for _ in range(Q):
    quads.append(list(map(int, input().split())))

max_score = 0

for seq in itertools.combinations_with_replacement(range(1, M + 1), N):
    score = 0
    for quad in quads:
        a, b, c, d = quad
        if seq[b - 1] - seq[a - 1] == c:
            score += d
    max_score = max(max_score, score)

print(max_score)
