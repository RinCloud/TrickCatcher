from typing import List

def max_sum_chosen_elements(N: int, A: List[int]) -> int:
    # Sort the array in descending order
    A.sort(reverse=True)
    
    # Initialize variables to keep track of the sum and chosen elements
    max_sum = 0
    chosen_elements = []
    
    # Iterate over the array and choose every second element starting from the first
    for i in range(0, N, 2):
        chosen_elements.append(A[i])
        max_sum += A[i]
    
    return max_sum

# Read the input
N = int(input())
A = list(map(int, input().split()))

# Call the function and print the result
result = max_sum_chosen_elements(N, A)
print(result)