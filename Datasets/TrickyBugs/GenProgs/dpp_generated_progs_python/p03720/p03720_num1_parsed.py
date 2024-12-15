def count_roads(N, M, roads):
    # Create a dictionary to store the number of roads connected to each city
    road_count = {}
    
    # Initialize the road count for each city to be zero
    for i in range(1, N+1):
        road_count[i] = 0
    
    # Iterate through the roads
    for road in roads:
        a, b = road
        # Increment the road count for city a and city b
        road_count[a] += 1
        road_count[b] += 1
    
    # Print the road count for each city
    for i in range(1, N+1):
        print(road_count[i])
        
    
# Read the input values
N, M = map(int, input().split())
roads = [list(map(int, input().split())) for _ in range(M)]

# Call the function to count the roads
count_roads(N, M, roads)