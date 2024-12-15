import math

def dfs(u, k, visited, adj_list):
    visited[u] = True
    count = [0] * (k+1)
    count[0] = 1
    
    for v in adj_list[u]:
        if not visited[v]:
            temp = dfs(v, k, visited, adj_list)
            for j in range(k, 0, -1):
                count[j] += count[j-1] * temp
    return count

def solve(n, k, p):
    adj_list = [[] for _ in range(n)]
    for i in range(n):
        for j in range(i+1, n):
            adj_list[i].append(j)
    
    total = 0
    visited = [False] * n
    
    for i in range(n):
        if not visited[i]:
            count = dfs(i, k, visited, adj_list)
            total += count[k]
    
    return total % p

n, k, p = map(int, input().split())
result = solve(n, k, p)
print(result)