# This problem is a variation of the "Minimum Vertex Cover" problem.
# We can treat each card as a vertex in a graph and each constraint as an edge connecting two vertices.
# If the sum of the values on the connected vertices is even, it means that at least one of them must have an even value (1+1=2 or 2+2=4).
# Therefore, we need to find the minimum number of vertices (cards) that can satisfy all the edges (constraints).
# In this problem, we can use the following strategy:
# 1. Initialize an empty set "covered" to keep track of the covered vertices.
# 2. Iterate over each constraint and check if the sum of the values on the connected vertices is odd.
# 3. If the sum is odd, add both vertices to the "covered" set.
# 4. Finally, the minimum cost required to determine all the values is equal to N minus the size of the "covered" set.

# Read N and M from input
N, M = map(int, input().split())

# Initialize the covered set
covered = set()

# Iterate over M constraints
for _ in range(M):
    # Read X, Y, Z from input
    X, Y, Z = map(int, input().split())
    
    # Check if the sum is odd
    if (Z % 2) != 0:
        # Add both vertices to the covered set
        covered.add(X)
        covered.add(Y)

# Calculate the minimum cost
minimum_cost = N - len(covered)

# Print the minimum cost
print(minimum_cost)