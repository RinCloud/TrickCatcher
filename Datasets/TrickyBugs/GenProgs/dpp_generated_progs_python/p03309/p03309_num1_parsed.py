# Start of the program

# Read the input N
N = int(input())

# Read the list of integers A
A = list(map(int, input().split()))

# Find the minimum possible sadness of Snuke
# Initialize the min_sadness with a large value
min_sadness = float('inf')

# Iterate through all possible values of b
for b in range(1, N+1):
    # Calculate the sadness of Snuke for the current value of b
    sadness = sum([abs(A[i] - (b+i)) for i in range(N)])
    
    # Update the minimum possible sadness if necessary
    min_sadness = min(min_sadness, sadness)

# Print the minimum possible sadness of Snuke
print(min_sadness)

# End of the program