# Given two non-negative integers L and R
L, R = map(int, input().split())

# Initialize the minimum value to a large number
min_value = float('inf')

# Iterate through all possible values of i
for i in range(L, R):
    # Iterate through all possible values of j
    for j in range(i + 1, R + 1):
        # Calculate the value of (i * j) % 2019
        value = (i * j) % 2019
        # Update the minimum value if necessary
        min_value = min(min_value, value)

# Print the minimum possible value
print(min_value)