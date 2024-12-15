# Taking input from standard input
N, K = map(int, input().split())

# Perform the operation to find the minimum possible value of N
while True:
    # Calculate the absolute difference between N and K
    abs_difference = abs(N - K)
    
    # If the absolute difference is smaller than N, update N with the absolute difference
    # Otherwise, break the loop as we have found the minimum possible value
    if abs_difference < N:
        N = abs_difference
    else:
        break

# Print the minimum possible value of N
print(N)