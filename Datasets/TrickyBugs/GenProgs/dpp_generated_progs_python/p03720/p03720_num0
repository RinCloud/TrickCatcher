def city_roads(N, M, roads):
    connections = [0] * N
    for road in roads:
        a, b = road
        connections[a - 1] += 1
        connections[b - 1] += 1
    return connections

# Read input
N, M = map(int, input().split())
roads = []
for _ in range(M):
    a, b = map(int, input().split())
    roads.append((a, b))

# Calculate number of roads connected to each city
connections = city_roads(N, M, roads)

# Print the answer
for connection in connections:
    print(connection)