import math

def calculate_possible_orders(N, A):
    # Initialize the variables
    MOD = 10**9 + 7
    possible_orders = 1
    left_counts = [0] * (N+1)
    right_counts = [0] * (N+1)
    
    # Count the number of people on the left and right for each person
    for i in range(N):
        if A[i] > i or A[i] > N-1-i:
            return 0
        left_counts[i+1] = A[i]
        right_counts[i+1] = N-1-i-A[i]
    
    # Calculate the number of possible orders using combinatorics
    for i in range(1, N+1):
        possible_orders *= math.comb(left_counts[i] + right_counts[i], left_counts[i])
        possible_orders %= MOD
    
    return possible_orders

# Read the input
N = int(input())
A = list(map(int, input().split()))

# Calculate and print the number of possible orders
print(calculate_possible_orders(N, A))