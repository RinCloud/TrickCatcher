from itertools import combinations

# Read input
N, P = map(int, input().split())
A = list(map(int, input().split()))

# Initialize counter
count = 0

# Generate all possible combinations of bags
for i in range(N+1):
    for combo in combinations(A, i):
        # Calculate the total number of biscuits selected
        total_biscuits = sum(combo)
        # Check if the number of biscuits is congruent to P modulo 2
        if total_biscuits % 2 == P:
            count += 1

# Print the number of ways to select bags
print(count)