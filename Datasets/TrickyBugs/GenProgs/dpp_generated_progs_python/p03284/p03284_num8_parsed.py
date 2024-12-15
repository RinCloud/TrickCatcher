import math

def min_cracker_difference(N, K):
    # Calculate the minimum possible (absolute) difference between the largest and smallest number of crackers received
    min_diff = math.ceil(N / K) - math.floor(N / K)
    return min_diff

# Read the input from standard input
N, K = map(int, input().split())

# Call the function and print the result
print(min_cracker_difference(N, K))