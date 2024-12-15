# Generate a list of all possible pairs of (i, j) such that L <= i < j <= R
# For each pair (i, j), calculate the value of (i * j) % 2019
# Find the minimum value among all calculated values
# Print the minimum value

L, R = map(int, input().split())

min_value = float('inf')
for i in range(L, R):
    for j in range(i + 1, R + 1):
        value = (i * j) % 2019
        min_value = min(min_value, value)

print(min_value)