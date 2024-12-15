import math

def calculate_cost(Q, H, S, D, N):
    # Calculate the cost for each bottle size
    cost_0_25 = N * Q
    cost_0_5 = N * H
    cost_1 = N * S
    cost_2 = N * D
    
    # Find the minimum cost
    min_cost = min(cost_0_25, cost_0_5, cost_1, cost_2)
    
    # Calculate the number of bottles needed for the minimum cost
    num_bottles = math.ceil(min_cost / min(N, 2))
    
    return num_bottles

# Read input from standard input
Q, H, S, D = map(int, input().split())
N = int(input())

# Calculate and print the smallest number of yen needed
print(calculate_cost(Q, H, S, D, N))