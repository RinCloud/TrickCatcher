import sys

# Read input
N, K = map(int, input().split())
H = list(map(int, input().split()))

# Sort the monster healths in descending order
H.sort(reverse=True)

# Initialize variables
num_attacks = 0

# Loop through the monster healths
for i in range(K, N):
    # Increment the number of attacks by the remaining health of the monster
    num_attacks += H[i]

# Print the minimum number of attacks
print(num_attacks)