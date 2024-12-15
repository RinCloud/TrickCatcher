import heapq

def dijkstra(N, M, S, railroads, exchanges):
    # Initialize distances
    distances = [float('inf')] * (N+1)
    distances[1] = 0

    # Initialize priority queue
    pq = []
    heapq.heappush(pq, (0, 1, S))

    while pq:
        distance, city, silver = heapq.heappop(pq)

        # If distance is greater than the current distance, continue to next city
        if distance > distances[city]:
            continue

        # Update the distances of adjacent cities
        for i in range(1, N+1):
            if i == city:
                continue
            for u, v, a, b in railroads:
                if (u == city and v == i) or (u == i and v == city):
                    if silver >= a:
                        new_distance = distance + b
                        if new_distance < distances[i]:
                            distances[i] = new_distance
                            heapq.heappush(pq, (new_distance, i, silver - a))
                        break

        # Exchange gold coins for silver coins
        for j in range(1, N+1):
            if j == city:
                continue
            c, d = exchanges[j-1]
            required_gold = float('inf')
            for k in range(len(pq)):
                _, _, s = pq[k]
                required_gold = min(required_gold, (c - s - 1) // d + 1)
            if required_gold != float('inf'):
                new_distance = distance + required_gold * d
                if new_distance < distances[j]:
                    distances[j] = new_distance
                    heapq.heappush(pq, (new_distance, j, silver + required_gold * d - c))

    return distances[2:]

# Read input
N, M, S = map(int, input().split())
railroads = []
for _ in range(M):
    u, v, a, b = map(int, input().split())
    railroads.append((u, v, a, b))
exchanges = []
for _ in range(N):
    c, d = map(int, input().split())
    exchanges.append((c, d))

# Find the minimum time needed to travel from City 1 to each city
distances = dijkstra(N, M, S, railroads, exchanges)

# Print the distances
for distance in distances:
    print(distance)
