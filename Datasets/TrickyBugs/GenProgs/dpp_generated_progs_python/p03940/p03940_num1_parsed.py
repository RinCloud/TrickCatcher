def calculate_minimum_time(N, E, T, bears):
    # Calculate the time taken to give candies to all bears
    time_taken = (N - 1) * T
    
    # Calculate the time taken to pick up all coins
    max_distance = max([E - bear for bear in bears])
    time_taken += max_distance
    
    # Calculate the total minimum time
    total_time = T + time_taken
    
    return total_time


# Read input
N, E, T = map(int, input().split())
bears = list(map(int, input().split()))

# Calculate and print the minimum time
minimum_time = calculate_minimum_time(N, E, T, bears)
print(minimum_time)