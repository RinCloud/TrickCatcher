import sys

def lucas_number(n):
    if n == 0:
        return 2
    elif n == 1:
        return 1
    else:
        a, b = 2, 1
        for _ in range(2, n+1):
            a, b = b, a + b
        return b

# Read and parse the integer N from input
N = int(sys.stdin.readline().strip())

# Calculate the N-th Lucas number
result = lucas_number(N)

# Print the result
print(result)