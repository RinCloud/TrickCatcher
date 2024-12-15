import sys

def max_operations(N, A):
    max_ops = sys.maxsize

    for i in range(N):
        ops = 0

        while A[i] % 2 == 0:
            A[i] //= 2
            ops += 1

        max_ops = min(max_ops, ops)

    return max_ops

# Read the input from standard input
N = int(input())
A = list(map(int, input().split()))

# Calculate and print the maximum possible number of operations
print(max_operations(N, A))