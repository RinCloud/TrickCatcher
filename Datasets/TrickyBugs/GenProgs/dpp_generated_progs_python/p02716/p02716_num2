def max_sum_chosen_elements(N, A):
    # Sort the sequence in non-decreasing order
    A = sorted(A)
    
    # Initialize the sum
    sum_of_elements = 0
    
    # Choose every alternate element starting from the first element
    for i in range(0, N, 2):
        sum_of_elements += A[i]
    
    return sum_of_elements


# Read N
N = int(input())

# Read the sequence A
A = list(map(int, input().split()))

# Calculate the maximum possible sum of the chosen elements
max_sum = max_sum_chosen_elements(N, A)

# Print the maximum possible sum
print(max_sum)