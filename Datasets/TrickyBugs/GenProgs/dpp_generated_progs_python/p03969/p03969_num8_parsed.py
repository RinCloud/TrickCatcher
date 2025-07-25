MOD = 10**9 + 7

def find_cycles(graph, start, visited, path, cycles):
    visited[start] = True
    path.append(start)

    for neighbor in graph[start]:
        if neighbor == path[0] and len(path) > 2:
            cycles.append(path.copy())
        elif not visited[neighbor]:
            find_cycles(graph, neighbor, visited, path, cycles)

    path.pop()
    visited[start] = False

def count_ways(graph, cycles, colors, K):
    count = [[0] * K for _ in range(len(cycles) + 1)]
    count[0][0] = 1

    for i in range(1, len(cycles) + 1):
        for j in range(K):
            for k in range(K):
                count[i][(j + k) % K] += count[i-1][j]

    num_ways = sum(count[-1]) * pow(K, len(graph) - sum(map(len, cycles)), MOD)
    return num_ways % MOD

def main():
    N, M, K = map(int, input().split())
    graph = [[] for _ in range(N)]

    for _ in range(M):
        a, b = map(int, input().split())
        graph[a-1].append(b-1)
        graph[b-1].append(a-1)

    visited = [False] * N
    cycles = []
    find_cycles(graph, 0, visited, [], cycles)

    num_ways = count_ways(graph, cycles, M, K)
    print(num_ways)

if __name__ == "__main__":
    main()
