import math

def minimum_operations(N, x, candies):
    operations = 0
    
    for i in range(1, N):
        diff = candies[i] + candies[i-1] - x
        if diff > 0:
            operations += diff
            candies[i] -= diff
    
    return operations

# Read input
N, x = map(int, input().split())
candies = list(map(int, input().split()))

# Call the function and print the result
print(minimum_operations(N, x, candies))