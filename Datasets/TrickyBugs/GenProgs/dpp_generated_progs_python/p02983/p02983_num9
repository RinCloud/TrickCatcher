# Given two non-negative integers L and R
L, R = map(int, input().split())

# Initialize the minimum value to infinity
min_value = float('inf')

# Loop through all possible values of i from L to R-1
for i in range(L, R):
    # Loop through all possible values of j from i+1 to R
    for j in range(i+1, R+1):
        # Compute the value of (i * j) % 2019
        value = (i * j) % 2019
        # Update the minimum value if necessary
        min_value = min(min_value, value)

# Print the minimum possible value
print(min_value)