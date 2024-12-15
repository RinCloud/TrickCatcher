N, K = map(int, input().split())
P = list(map(int, input().split()))
C = list(map(int, input().split()))

max_score = max(C)

for i in range(N):
    visited = set()
    cycle = []
    j = i
    while True:
        if j in visited:
            break
        visited.add(j)
        cycle.append(C[j])
        j = P[j] - 1
    
    cycle_sum = sum(cycle)
    cycle_len = len(cycle)
    
    if cycle_sum > 0:
        if K >= cycle_len:
            score = cycle_sum * (K // cycle_len)
            remaining_moves = K % cycle_len
            for c in cycle[:remaining_moves]:
                score += c
            max_score = max(max_score, score)
        else:
            score = 0
            for c in cycle[:K]:
                score += c
            max_score = max(max_score, score)

print(max_score)