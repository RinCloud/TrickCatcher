# Read input values
N = int(input())
s = input()
t = input()

# Find the length of the shortest string
shortest_length = 2 * N

# Iterate over all possible lengths of the middle part of the string
for i in range(N+1):
    # Check if the string satisfies the conditions
    if s[:N-i] == t[i:]:
        shortest_length = N + i
        break

# Print the length of the shortest string
print(shortest_length)