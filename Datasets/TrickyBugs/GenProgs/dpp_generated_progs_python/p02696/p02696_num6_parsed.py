import math

# Input
A, B, N = map(int, input().split())

# Initialize max value to negative infinity
max_value = float('-inf')

# Iterate over all possible values of x
for x in range(N+1):
    # Calculate the current value of floor(Ax/B) - A * floor(x/B)
    value = math.floor(A*x/B) - A * math.floor(x/B)
    
    # Update max value if value is greater
    if value > max_value:
        max_value = value

# Output max value
print(max_value)