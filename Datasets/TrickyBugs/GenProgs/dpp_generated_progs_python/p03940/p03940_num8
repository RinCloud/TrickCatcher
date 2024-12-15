# IMPLEMENTATION:

def calculate_minimum_time(N, E, T, bears):
    max_time = 0
    for i in range(N):
        distance = bears[i]
        time = (distance - 1) * T + E
        max_time = max(max_time, time)
    return max_time

# Read input
N, E, T = map(int, input().split())
bears = list(map(int, input().split()))

# Calculate minimum time
minimum_time = calculate_minimum_time(N, E, T, bears)

# Print the answer
print(minimum_time)