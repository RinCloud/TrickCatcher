from collections import defaultdict
 
def dfs(node, graph, visited):
    visited[node] = True
    for neighbor, _ in graph[node]:
        if not visited[neighbor]:
            dfs(neighbor, graph, visited)
 
def main():
    N, M = map(int, input().split())
    graph = defaultdict(list)
    for _ in range(M):
        a, b, c = map(int, input().split())
        graph[a].append((b, c))
 
    visited = [False] * (N + 1)
    dfs(1, graph, visited)
 
    scores = [float('-inf')] * (N + 1)
    scores[1] = 0
 
    for _ in range(N - 1):
        for node in range(1, N + 1):
            for neighbor, score in graph[node]:
                if scores[node] != float('-inf') and scores[neighbor] < scores[node] + score:
                    scores[neighbor] = scores[node] + score
 
    if visited[N] and scores[N] == float('inf'):
        print('inf')
    elif visited[N]:
        print(scores[N])
    else:
        print('inf')
 
if __name__ == '__main__':
    main()