import math

def calculate_possible_sums(N, A, B):
    if A == B:
        return 1
    if N == 1:
        return 0
    
    range_sum = (A + B) * ((B - A + 1) // 2)
    remainder = (B - A + 1) % 2
    if remainder == 1:
        range_sum += (A + B) // 2
    
    return range_sum

# Read input from standard input
N, A, B = map(int, input().split())

# Calculate the number of different possible sums
num_possible_sums = calculate_possible_sums(N, A, B)

# Print the number of different possible sums
print(num_possible_sums)