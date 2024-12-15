# Program to find the minimum number of power strips required to extend one socket into B or more empty sockets

# Get input values for A and B
A, B = map(int, input().split())

# Calculate the minimum number of power strips required
min_power_strips = (B-1) // (A-1) + 1

# Print the minimum number of power strips required
print(min_power_strips)