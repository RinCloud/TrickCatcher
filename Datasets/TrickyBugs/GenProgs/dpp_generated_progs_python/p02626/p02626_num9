# Implementation

def solve(N, A):
    total_stones = sum(A)
    max_stones = max(A)
    remaining_stones = total_stones - max_stones

    if max_stones > remaining_stones * 2:
        return -1

    return remaining_stones - (max_stones - remaining_stones) % 2

# Read input
N = int(input())
A = list(map(int, input().split()))

# Call solve function and print the result
print(solve(N, A))