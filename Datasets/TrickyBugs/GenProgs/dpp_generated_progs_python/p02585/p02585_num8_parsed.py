def max_possible_score(N, K, P, C):
    visited = [0] * N
    max_score = -float('inf')
    for i in range(N):
        if visited[i] == 0:
            start = i
            max_score_cycle = -float('inf')
            current = start
            score_cycle = 0
            num_moves = 0
            while True:
                current = P[current] - 1
                score_cycle += C[current]
                num_moves += 1
                max_score_cycle = max(max_score_cycle, score_cycle)
                visited[current] = num_moves
                if current == start:
                    break
            if score_cycle < 0:
                max_score = max(max_score, max_score_cycle)
                continue
            remaining_moves = K - num_moves
            remaining_max_score = 0 if remaining_moves <= 0 else max_score_cycle * (remaining_moves // num_moves)
            max_score = max(max_score, score_cycle + remaining_max_score)
    return max_score

N, K = map(int, input().split())
P = list(map(int, input().split()))
C = list(map(int, input().split()))

print(max_possible_score(N, K, P, C))