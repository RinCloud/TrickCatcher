# Program:

from collections import defaultdict

def dfs(x, parent, graph):
    tree_uninity = 0
    
    for child in graph[x]:
        if child != parent:
            subtree_uninity = dfs(child, x, graph)
            if subtree_uninity == -1:
                return -1
            if subtree_uninity + 1 > tree_uninity:
                tree_uninity = subtree_uninity + 1
    
    return tree_uninity

def find_minimum_uninity(N, edges):
    graph = defaultdict(list)
    for u, v in edges:
        graph[u].append(v)
        graph[v].append(u)
    
    uninity = dfs(1, -1, graph)
    return uninity

if __name__ == '__main__':
    N = int(input())
    edges = []
    for _ in range(N-1):
        u, v = map(int, input().split())
        edges.append((u, v))
    
    minimum_uninity = find_minimum_uninity(N, edges)
    print(minimum_uninity)