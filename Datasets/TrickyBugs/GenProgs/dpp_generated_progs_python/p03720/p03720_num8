def count_roads(N, M, roads):
    road_count = [0] * N
    for a, b in roads:
        road_count[a-1] += 1
        road_count[b-1] += 1
    for count in road_count:
        print(count)

# Read input
N, M = map(int, input().split())
roads = []
for _ in range(M):
    a, b = map(int, input().split())
    roads.append((a, b))

# Call function
count_roads(N, M, roads)