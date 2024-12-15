import sys

# Read input from standard input
N = int(sys.stdin.readline())
a = list(map(int, sys.stdin.readline().split()))

# Initialize the maximum sum
max_sum = 0

# Iterate through all possible values of m
for m in range(max(a)):
    # Calculate the sum of modulos for current m
    current_sum = sum([m % ai for ai in a])
    
    # If the current sum is greater than the maximum sum, update the maximum sum
    if current_sum > max_sum:
        max_sum = current_sum

# Print the maximum sum
print(max_sum)