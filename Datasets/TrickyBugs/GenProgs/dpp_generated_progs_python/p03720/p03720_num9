# Getting input values

N, M = map(int, input().split())

# Initializing an empty list to keep track of the number of roads connected to each city
num_roads_connected = [0] * N

# Looping through the input roads and incrementing the count for each city
for _ in range(M):
    a, b = map(int, input().split())
    num_roads_connected[a-1] += 1
    num_roads_connected[b-1] += 1

# Printing the number of roads connected to each city
for num_roads in num_roads_connected:
    print(num_roads)