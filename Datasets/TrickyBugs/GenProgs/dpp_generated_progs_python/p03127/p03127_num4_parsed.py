import sys

# Read input
N = int(sys.stdin.readline())
monsters = list(map(int, sys.stdin.readline().split()))

# Find the minimum possible final health of the last monster alive
min_final_health = min(monsters)

# Print the result
print(min_final_health)
