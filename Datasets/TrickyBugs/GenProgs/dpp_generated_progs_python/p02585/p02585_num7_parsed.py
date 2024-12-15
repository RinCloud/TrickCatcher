N, K = map(int, input().split())
P = list(map(int, input().split()))
C = list(map(int, input().split()))

max_score = float('-inf')
for i in range(N):
    visited = [False] * N
    curr = i
    score = 0
    moves = 0
    while not visited[curr] and moves < K:
        visited[curr] = True
        curr = P[curr] - 1
        score += C[curr]
        moves += 1
    if moves < K:
        cycle_length = moves - visited.index(True)
        cycle_score = score - (score - C[curr]) * ((K - moves) // cycle_length)
        max_score = max(max_score, cycle_score)
    max_score = max(max_score, score)

print(max_score)