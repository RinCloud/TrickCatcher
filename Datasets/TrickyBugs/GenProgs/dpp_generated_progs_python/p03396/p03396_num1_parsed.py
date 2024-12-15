def calculate_minimum_time(N, L, shopping_centers, times):
    train_distance = L * 2
    total_time = 0
    
    # Calculate the time to reach each shopping center
    for i in range(N):
        # Time taken to reach the shopping center
        time_to_shopping_center = shopping_centers[i] - total_time
        total_time += time_to_shopping_center
        
        # Wait at the shopping center
        total_time += times[i]
        
        # Time taken to return to the starting point
        time_to_starting_point = train_distance - shopping_centers[i]
        total_time += time_to_starting_point
    
    # Time taken to reach the last shopping center
    last_shopping_center = train_distance - total_time
    total_time += last_shopping_center
    
    return total_time

# Read the input
N, L = map(int, input().split())
shopping_centers = list(map(int, input().split()))
times = list(map(int, input().split()))

# Calculate and print the minimum time required
min_time = calculate_minimum_time(N, L, shopping_centers, times)
print(min_time)