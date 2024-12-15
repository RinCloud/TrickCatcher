# Given are integers A, B, and N.
# Find the maximum possible value of floor(Ax/B) - A × floor(x/B) for a non-negative integer x not greater than N.

# Reading input values
A, B, N = map(int, input().split())

# Initializing the maximum value as -1
max_value = -1

# Looping from 0 to N
for x in range(N+1):
    # Calculating floor(Ax/B) - A × floor(x/B)
    value = (A * x // B) - A * (x // B)
    # Updating the maximum value if the current value is greater
    if value > max_value:
        max_value = value

# Printing the maximum value
print(max_value)