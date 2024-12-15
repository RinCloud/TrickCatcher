def minimum_time(N, E, T, positions):
    # Calculate the time required to reach each bear position
    times = [positions[i] * T for i in range(N)]
    
    # Calculate the maximum time required to reach all the bears
    max_time = max(times)
    
    # Calculate the time required to reach the exit
    exit_time = E
    
    # Calculate the minimum time Shik needs to collect all the coins and go to the exit
    minimum_time = max_time + exit_time
    
    return minimum_time

# Read input from standard input
N, E, T = map(int, input().split())
positions = list(map(int, input().split()))

# Calculate the minimum time
answer = minimum_time(N, E, T, positions)

# Print the answer
print(answer)