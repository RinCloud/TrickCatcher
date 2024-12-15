def max_score(N, K, P, C):
    visited = [False] * N
    max_score = -float('inf')
    
    for i in range(N):
        if visited[i]:
            continue
        path = []        
        while not visited[i]:
            visited[i] = True
            path.append(i)
            i = P[i] - 1
        cycle_sum = sum(C[j] for j in path)
        cycle_length = len(path)
        
        if cycle_sum < 0:
            for j in range(cycle_length):
                total_score = cycle_sum * ((K - j) // cycle_length)
                remaining_moves = (K - j) % cycle_length
                for k in range(remaining_moves):
                    total_score += C[path[(j + k) % cycle_length]]
                max_score = max(max_score, total_score)
        else:
            for j in range(cycle_length):
                total_score = cycle_sum * (K // cycle_length)
                remaining_moves = K % cycle_length
                for k in range(remaining_moves):
                    total_score += C[path[(j + k) % cycle_length]]
                max_score = max(max_score, total_score)
    
    return max_score

N, K = map(int, input().split())
P = list(map(int, input().split()))
C = list(map(int, input().split()))

result = max_score(N, K, P, C)
print(result)