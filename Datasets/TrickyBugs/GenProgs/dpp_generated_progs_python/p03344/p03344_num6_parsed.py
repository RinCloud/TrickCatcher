from collections import defaultdict

def solve(N, M, AB, UV):
    graph = defaultdict(list)
    for u, v in UV:
        graph[u].append(v)
        graph[v].append(u)
    
    ans = float('inf')
    for i in range(1, N+1):
        A = [0] * (N+1)
        B = [0] * (N+1)
        for j in range(1, N+1):
            A[j] = AB[j-1][0]
            B[j] = AB[j-1][1]
        
        min_money = float('inf')
        queue = [(i, 0)] # (vertex, money)
        while queue:
            curr_vertex, curr_money = queue.pop()
            if curr_money < A[curr_vertex]:
                curr_money = A[curr_vertex]
            min_money = min(min_money, curr_money)
            
            for adj_vertex in graph[curr_vertex]:
                if A[adj_vertex] <= curr_money:
                    if curr_money - B[curr_vertex] >= 0:
                        queue.append((adj_vertex, curr_money - B[curr_vertex]))
        
        ans = min(ans, min_money)
    
    return ans

# Read the input
N, M = map(int, input().split())
AB = [tuple(map(int, input().split())) for _ in range(N)]
UV = [tuple(map(int, input().split())) for _ in range(M)]

# Solve the problem
result = solve(N, M, AB, UV)

# Print the result
print(result)