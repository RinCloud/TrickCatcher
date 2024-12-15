import math

# Function to calculate the maximum possible value of M_1 + M_2 + ... + M_N
def calculate_max_sum(N):
    # If N is 1, return 0
    if N == 1:
        return 0
    
    # Calculate the minimum value for P_1
    min_P_1 = math.ceil(N/2)
    
    # Calculate the maximum possible value of M_1 + M_2 + ... + M_N
    max_sum = (min_P_1 - 1) * (N - min_P_1 + 1)
    
    return max_sum

# Read the input value for N
N = int(input())

# Calculate the maximum possible value of M_1 + M_2 + ... + M_N
max_sum = calculate_max_sum(N)

# Print the maximum possible value of M_1 + M_2 + ... + M_N
print(max_sum)