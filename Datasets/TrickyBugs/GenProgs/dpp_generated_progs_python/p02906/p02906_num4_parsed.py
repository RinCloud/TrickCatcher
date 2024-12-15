import sys

def dfs(v, visited, adj_list):
    visited[v] = True
    for u in adj_list[v]:
        if not visited[u]:
            dfs(u, visited, adj_list)

def check_graph(clues, N):
    adj_list = [[] for _ in range(N)]
    for a, b, c in clues:
        if c == 0:
            adj_list[a].append(b)
            adj_list[b].append(a)
    
    visited = [False] * N
    dfs(0, visited, adj_list)
    
    if not all(visited):
        return False
    
    for a, b, c in clues:
        if c == 1:
            if len(adj_list[a]) < 2 or len(adj_list[b]) < 2:
                return False
    
    return True

def main():
    N, M, Q = map(int, sys.stdin.readline().split())
    clues = []
    for _ in range(Q):
        a, b, c = map(int, sys.stdin.readline().split())
        clues.append((a, b, c))
    
    if check_graph(clues, N):
        print("Yes")
    else:
        print("No")

if __name__ == "__main__":
    main()