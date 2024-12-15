def max_remainder_sum(N):
    # Generate permutation of numbers from 1 to N
    permutation = list(range(1, N+1))
    
    # Sort the permutation in descending order
    permutation.sort(reverse=True)
    
    # Calculate the maximum possible value of M_1 + M_2 + ... + M_N
    max_sum = 0
    for i in range(1, N+1):
        max_sum += i % permutation[i-1]
    
    return max_sum

# Get the input N
N = int(input())

# Calculate and print the maximum possible value of M_1 + M_2 + ... + M_N
print(max_remainder_sum(N))