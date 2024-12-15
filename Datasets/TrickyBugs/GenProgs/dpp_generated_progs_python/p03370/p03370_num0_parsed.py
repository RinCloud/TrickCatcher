def calculate_max_doughnuts(N, X, m):
    min_moto = min(m)
    total_moto = sum(m)
    max_doughnuts = (X - min_moto) // min_moto
    total_moto -= min_moto * max_doughnuts
    
    while max_doughnuts < N and total_moto >= m[max_doughnuts]:
        total_moto -= m[max_doughnuts]
        max_doughnuts += 1
    
    return max_doughnuts

N, X = map(int, input().split())
m = [int(input()) for _ in range(N)]

print(calculate_max_doughnuts(N, X, m))