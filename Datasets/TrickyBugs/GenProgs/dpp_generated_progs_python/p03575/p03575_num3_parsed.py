def find_bridges(graph, n, m):
    def dfs(v, p):
        nonlocal timer

        low[v] = ids[v] = timer
        timer += 1

        for u in graph[v]:
            if u == p:
                continue
            if ids[u] == -1:
                dfs(u, v)
                low[v] = min(low[v], low[u])
                if low[u] > ids[v]:
                    bridges.add((v, u))
            else:
                low[v] = min(low[v], ids[u])

    timer = 0
    ids = [-1] * (n + 1)
    low = [0] * (n + 1)
    bridges = set()

    for i in range(1, n + 1):
        if ids[i] == -1:
            dfs(i, -1)

    return bridges


def main():
    n, m = map(int, input().split())
    graph = {i: [] for i in range(1, n + 1)}

    for _ in range(m):
        a, b = map(int, input().split())
        graph[a].append(b)
        graph[b].append(a)

    bridges = find_bridges(graph, n, m)

    print(len(bridges))


if __name__ == "__main__":
    main()