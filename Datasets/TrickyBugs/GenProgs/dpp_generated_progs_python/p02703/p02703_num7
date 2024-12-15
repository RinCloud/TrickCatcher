from heapq import heappop, heappush

def dijkstra(graph, start):
    n = len(graph)
    distances = [float('inf')] * n
    distances[start] = 0

    pq = [(0, start)]
    while pq:
        dist, node = heappop(pq)

        if dist > distances[node]:
            continue

        for neighbor, cost in graph[node]:
            new_dist = dist + cost
            if new_dist < distances[neighbor]:
                distances[neighbor] = new_dist
                heappush(pq, (new_dist, neighbor))

    return distances

def main():
    N, M, S = map(int, input().split())

    graph = [[] for _ in range(N)]
    for _ in range(M):
        U, V, A, B = map(int, input().split())
        graph[U-1].append((V-1, B))
        graph[V-1].append((U-1, B))

    exchange = []
    for _ in range(N):
        C, D = map(int, input().split())
        exchange.append((C, D))

    distances = dijkstra(graph, 0)
    for t in range(1, N):
        exchange_time = (distances[t] + exchange[t-1][1] - 1) // exchange[t-1][1]
        total_time = exchange[t-1][0] * exchange_time + distances[t]
        print(total_time)

if __name__ == '__main__':
    main()