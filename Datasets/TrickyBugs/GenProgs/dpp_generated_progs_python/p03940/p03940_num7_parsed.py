import sys

def minimum_time(N, E, T, positions):
    # Calculate the minimum time needed to collect all the coins and go to the exit
    min_time = 0
    
    # Calculate the time needed to give candies to all the bears
    for i in range(N):
        min_time += T * (E - positions[i])
    
    # Add the time needed to reach the exit
    min_time += E
    
    return min_time

# Read the input from standard input
input_lines = sys.stdin.read().strip().split("\n")
N, E, T = map(int, input_lines[0].split())
positions = list(map(int, input_lines[1].split()))

# Calculate the minimum time
result = minimum_time(N, E, T, positions)

# Print the result
print(result)