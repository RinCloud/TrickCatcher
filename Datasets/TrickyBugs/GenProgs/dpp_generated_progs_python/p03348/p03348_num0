from collections import defaultdict
from queue import Queue
import sys

def bfs(G, root):
    q = Queue()
    q.put(root)
    color = defaultdict(int)
    color[root] = 1
    while not q.empty():
        u = q.get()
        for v in G[u]:
            if color[v] == 0:
                color[v] = 3 - color[u]
                q.put(v)
    return color

def main():
    N = int(input())
    G = defaultdict(list)
    for _ in range(N - 1):
        a, b = map(int, input().split())
        G[a].append(b)
        G[b].append(a)
    
    min_colorfulness = float('inf')
    min_leaves = float('inf')
    for root in range(1, N + 1):
        color = bfs(G, root)
        colorfulness = max(color.values())
        if colorfulness <= 2:
            leave_count = sum(v == 1 for v in color.values())
            if colorfulness < min_colorfulness or (colorfulness == min_colorfulness and leave_count < min_leaves):
                min_colorfulness = colorfulness
                min_leaves = leave_count
    
    print(min_colorfulness, min_leaves)


if __name__ == "__main__":
    sys.setrecursionlimit(10**7)
    main()