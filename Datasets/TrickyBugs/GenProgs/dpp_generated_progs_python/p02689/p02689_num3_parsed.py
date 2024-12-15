# Python program to find the number of good observatory

# Function to find the number of good observatories
def find_good_observatories(N, M, elevations, roads):
    # Initialize a list to store the maximum elevation reachable from each observatory
    max_elevation = [0] * N
    
    # Traverse each road and update the maximum elevation reachable from each observatory
    for road in roads:
        A, B = road
        max_elevation[A-1] = max(max_elevation[A-1], elevations[B-1])
        max_elevation[B-1] = max(max_elevation[B-1], elevations[A-1])
    
    # Count the number of good observatories
    count = 0
    for i in range(N):
        if elevations[i] >= max_elevation[i]:
            count += 1
    
    return count

# Read the input values
N, M = map(int, input().split())
elevations = list(map(int, input().split()))

# Initialize a list to store the roads
roads = []

# Read the roads
for _ in range(M):
    road = list(map(int, input().split()))
    roads.append(road)

# Find the number of good observatories
result = find_good_observatories(N, M, elevations, roads)

# Print the result
print(result)