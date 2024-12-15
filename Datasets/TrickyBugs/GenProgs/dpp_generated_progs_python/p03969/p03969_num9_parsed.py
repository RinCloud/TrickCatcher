MOD = 10**9 + 7

def dfs(graph, colors, node, visited):
    visited[node] = True
    count = 1
    for neighbor in graph[node]:
        if not visited[neighbor]:
            count = (count * (colors - 1)) % MOD
            count = (count * dfs(graph, colors, neighbor, visited)) % MOD
    return count

def main():
    N, M, K = map(int, input().split())
    graph = [[] for _ in range(N + 1)]
    for _ in range(M):
        a, b = map(int, input().split())
        graph[a].append(b)
        graph[b].append(a)
    visited = [False] * (N + 1)
    result = 1
    for node in range(1, N + 1):
        if not visited[node]:
            result = (result * K * dfs(graph, K, node, visited)) % MOD
    print(result)

if __name__ == "__main__":
    main()
