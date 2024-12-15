import sys

def sum_modulo_p(N, A):
    P = 200003
    sum = 0

    for i in range(N):
        for j in range(i+1, N):
            sum += (A[i] * A[j]) % P

    return sum

# Read input
N = int(sys.stdin.readline())
A = list(map(int, sys.stdin.readline().split()))

# Calculate sum modulo P
result = sum_modulo_p(N, A)

# Print output
print(result)