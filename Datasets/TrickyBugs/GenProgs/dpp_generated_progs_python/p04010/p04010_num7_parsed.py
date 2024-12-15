from collections import deque

def bfs(adj_list, start_node):
    n = len(adj_list)
    colors = [-1] * n

    queue = deque()
    queue.append((start_node, 0))

    while queue:
        node, depth = queue.popleft()

        for neighbor in adj_list[node]:
            if colors[neighbor] == -1:
                colors[neighbor] = 1 - colors[node]
                queue.append((neighbor, depth + 1))
            elif colors[neighbor] == colors[node]:
                return -1
    
    return depth

def main():
    n, m = map(int, input().split())
    
    adj_list = [[] for _ in range(n)]

    for _ in range(m):
        a, b = map(int, input().split())
        adj_list[a-1].append(b-1)
        adj_list[b-1].append(a-1)

    result = bfs(adj_list, 0)

    if result == -1:
        print(-1)
    else:
        print(result)

if __name__ == "__main__":
    main()