"""
# Function to count the number of permutations that can be produced after the operation
def count_permutations(N, K, P):
    # Initialize count to 1 since the original permutation also satisfies the condition
    count = 1

    # Traverse through the permutation array
    for i in range(N - K):
        # If the element at index i is greater than the element at index (i + K),
        # increment the count
        if P[i] > P[i + K]:
            count += 1

    return count


# Reading input values
N, K = map(int, input().split())
P = list(map(int, input().split()))

# Calling the count_permutations function to calculate the result
result = count_permutations(N, K, P)

# Printing the result
print(result)
"""