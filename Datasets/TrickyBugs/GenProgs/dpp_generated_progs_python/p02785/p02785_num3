import math

# Read input
N, K = map(int, input().split())
H = list(map(int, input().split()))

# Sort the monsters' health in decreasing order
H.sort(reverse=True)

# Calculate the total number of times Fennec needs to do Attack
total_attacks = sum(H[K:])

# Print the minimum number of times Fennec needs to do Attack
print(total_attacks)