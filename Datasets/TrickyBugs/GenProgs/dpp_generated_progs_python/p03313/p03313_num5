import sys

def solve(N, A):
    # Calculate the maximum OR value for each K
    max_or = [0] * (2**N)
    for k in range(1, 2**N):
        max_value = 0
        for i in range(k):
            for j in range(i+1, k+1):
                max_value = max(max_value, A[i] + A[j])
        max_or[k] = max_value

    # Print the result for each K
    for k in range(1, 2**N):
        print(max_or[k])

# Read input from stdin
N = int(input())
A = list(map(int, input().split()))

# Call the solve function
solve(N, A)