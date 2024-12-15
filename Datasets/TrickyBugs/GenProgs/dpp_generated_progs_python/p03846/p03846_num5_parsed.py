import math

MOD = int(1e9) + 7

def possible_orders(N, A):
    # If N is odd, the sum of A should be 0
    if N % 2 == 1:
        if sum(A) != 0:
            return 0
    else:
        # If N is even, the sum of A should be N/2 or -N/2
        if sum(A) != N // 2 and sum(A) != -N // 2:
            return 0
    
    # Count the number of 0s, positive differences, and negative differences
    zeros = 0
    pos_diff = 0
    neg_diff = 0
    for i in range(N):
        if A[i] == 0:
            zeros += 1
        elif A[i] > 0:
            pos_diff += 1
        else:
            neg_diff += 1
    
    # Calculate the number of possible orders
    result = pow(2, zeros, MOD) * math.factorial(N // 2) % MOD
    return result

# Read input
N = int(input())
A = list(map(int, input().split()))

# Calculate and print the result
print(possible_orders(N, A))