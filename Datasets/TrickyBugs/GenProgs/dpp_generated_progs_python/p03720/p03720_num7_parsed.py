# Read input values
N, M = map(int, input().split())

# Initialize a list to keep track of the number of roads for each city
num_roads = [0] * N

# Iterate through the roads
for _ in range(M):
    a, b = map(int, input().split())

    # Increment the count for both cities connected by the road
    num_roads[a-1] += 1
    num_roads[b-1] += 1

# Print the number of roads for each city
for roads in num_roads:
    print(roads)