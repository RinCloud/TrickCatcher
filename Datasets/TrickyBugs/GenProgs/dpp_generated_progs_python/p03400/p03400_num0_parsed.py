import sys

# Read input
N = int(input())
D, X = map(int, input().split())
A = [int(input()) for _ in range(N)]

# Calculate the total number of chocolate pieces eaten
total_eaten = 0
for a in A:
    total_eaten += (D - 1) // a + 1

# Calculate the number of chocolate pieces prepared at the beginning
chocolates_prepared = X + total_eaten

# Print the result
print(chocolates_prepared)