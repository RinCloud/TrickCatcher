import sys

def max_score(N, K, P, C):
    max_score = -sys.maxsize
    for start in range(N):
        visited = [False] * N
        path = []
        curr = start
        score = 0
        while not visited[curr]:
            visited[curr] = True
            path.append(curr)
            score += C[curr]
            curr = P[curr] - 1
        if score > max_score:
            max_score = score
        if K <= 0:
            break
        K -= 1
        cycle_len = len(path) - path.index(curr)
        if K < cycle_len:
            break
        num_cycles = (K // cycle_len)
        score += (score - score_before_cycle) * num_cycles
        K -= num_cycles * cycle_len
        score_before_cycle = score
        for i in range(K):
            score += C[path[path.index(curr) + i]]
            if score > max_score:
                max_score = score
    return max_score


N, K = map(int, input().split())
P = list(map(int, input().split()))
C = list(map(int, input().split()))
print(max_score(N, K, P, C))