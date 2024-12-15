def count_roads(N, M, roads):
    # Initialize a list to store the count of roads for each city
    road_count = [0] * N
    
    # Iterate through each road
    for road in roads:
        # Get the two cities connected by the road
        city_a, city_b = road
        
        # Increment the count for both cities
        road_count[city_a - 1] += 1
        road_count[city_b - 1] += 1
    
    # Print the count of roads for each city
    for count in road_count:
        print(count)

# Read the input values
N, M = map(int, input().split())

# Read the roads
roads = []
for _ in range(M):
    a, b = map(int, input().split())
    roads.append((a, b))

# Call the function to count the roads
count_roads(N, M, roads)