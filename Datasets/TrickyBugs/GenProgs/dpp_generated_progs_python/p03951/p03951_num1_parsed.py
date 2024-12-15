import sys

N = int(input())
s = input()
t = input()

# Find the length of the shortest string that satisfies the conditions
shortest_length = N * 2

# Iterate through all possible lengths of the middle string between s and t
for middle_length in range(N + 1):
    # Check if the middle string satisfies the conditions
    if s[-middle_length:] == t[:middle_length]:
        # Calculate the length of the string that satisfies the conditions
        length = N + middle_length

        # Update the shortest length if necessary
        shortest_length = min(shortest_length, length)

# Print the length of the shortest string that satisfies the conditions
print(shortest_length)