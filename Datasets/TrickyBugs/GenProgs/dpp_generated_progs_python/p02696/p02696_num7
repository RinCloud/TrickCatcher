import sys

# Read input from Standard Input
input_data = sys.stdin.readline().split()
A = int(input_data[0])
B = int(input_data[1])
N = int(input_data[2])

# Initialize max_value to -infinity
max_value = float('-inf')

# Iterate from 0 to N
for x in range(N+1):
    # Calculate floor(Ax/B) and A * floor(x/B)
    floor_Ax_div_B = floor(A * x / B)
    A_floor_x_div_B = A * floor(x / B)
    
    # Calculate difference
    difference = floor_Ax_div_B - A_floor_x_div_B
    
    # Update max_value if difference is greater
    if difference > max_value:
        max_value = difference

# Print the maximum possible value
print(max_value)