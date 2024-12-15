import sys

def min_amount_of_money(N, M, A):
    sorted_A = sorted(A)
    total_cost = sum(sorted_A)
    discount_cost = 0
    for i in range(M):
        discount_cost += sorted_A[i] // 2**i
    return total_cost - discount_cost

# Read input from stdin
input_lines = sys.stdin.readlines()
N, M = map(int, input_lines[0].split())
A = list(map(int, input_lines[1].split()))

# Call the function and print the result
print(min_amount_of_money(N, M, A))