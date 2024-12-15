import sys

def sum_modulo_p(N, A):
    P = 200003
    total_sum = 0

    for i in range(N):
        for j in range(i + 1, N):
            product_mod_p = (A[i] * A[j]) % P
            total_sum += product_mod_p

    return total_sum

# Read input
input_lines = sys.stdin.readlines()
N = int(input_lines[0])
A = list(map(int, input_lines[1].split()))

# Compute and print the sum
result = sum_modulo_p(N, A)
print(result)