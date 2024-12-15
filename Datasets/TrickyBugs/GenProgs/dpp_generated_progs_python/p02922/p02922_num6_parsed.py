# Read the inputs
A, B = map(int, input().split())

# Calculate the minimum number of power strips required
power_strips = (B-1) // (A-1) + 1

# Print the result
print(power_strips)