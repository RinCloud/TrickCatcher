# Python program to find the maximum possible sum of elements in sequence A

# Function to find maximum sum of elements in sequence A
def max_sum_of_elements(N, B):
    # Initialize the sum of elements in sequence A
    max_sum = 0

    # Iterate through the sequence B in reverse order
    for i in range(N-2, -1, -1):
        # Calculate the maximum value between A[i] and A[i+1]
        A_i = max(B[i], B[i+1])
        # Update the sum of elements in sequence A
        max_sum += A_i
    
    # Return the maximum sum of elements in sequence A
    return max_sum

# Read the input from standard input
N = int(input())
B = list(map(int, input().split()))

# Calculate the maximum possible sum of elements in sequence A
result = max_sum_of_elements(N, B)

# Print the result
print(result)