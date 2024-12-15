# To solve this problem, we will iterate through all the given equations.
# For each equation, we will check if the sum of the values on the cards (A[X] + A[Y]) is even.
# If the sum is even, we will mark the cards A[X] and A[Y] as "visited".
# To determine all the cards correctly, we need to visit all the cards at least once.
# So the minimum cost required will be the number of cards minus the number of cards visited by the equations.

N, M = map(int, input().split())

# Initialize a list to keep track of visited cards
visited = [False] * (N+1)

# Iterate through all the equations
for _ in range(M):
    X, Y, Z = map(int, input().split())

    # Check if the sum of A[X] and A[Y] is even
    if (Z % 2 == 0):
        visited[X] = True
        visited[Y] = True

# Calculate the minimum cost required
min_cost = N - visited.count(True)

# Print the result
print(min_cost)