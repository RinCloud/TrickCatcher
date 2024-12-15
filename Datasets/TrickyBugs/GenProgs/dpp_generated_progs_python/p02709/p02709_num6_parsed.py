from typing import List

def maximum_happiness_points(N: int, A: List[int]) -> int:
    # Sort the children in non-decreasing order of activeness
    A.sort()
    
    # Initialize total happiness points to 0
    total_happiness_points = 0
    
    # Calculate the maximum happiness points for each child
    for i in range(N):
        total_happiness_points += A[i] * abs(i - (N - 1 - i))
    
    return total_happiness_points


# Read input
N = int(input())
A = list(map(int, input().split()))

# Calculate and print the maximum total happiness points
print(maximum_happiness_points(N, A))