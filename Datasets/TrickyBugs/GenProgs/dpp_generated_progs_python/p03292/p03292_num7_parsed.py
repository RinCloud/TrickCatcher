import itertools

# Read the input
A = list(map(int, input().split()))

# Initialize the minimum cost
min_cost = float('inf')

# Generate all possible permutations of completing the tasks
permutations = itertools.permutations(A)

# Iterate over each permutation
for perm in permutations:
    # Initialize the total cost for this permutation
    total_cost = 0
    
    # Iterate over each pair of tasks in this permutation
    for i in range(len(perm)-1):
        # Calculate the cost of completing the second task after the first
        cost = abs(perm[i+1] - perm[i])
        
        # Add the cost to the total cost
        total_cost += cost
    
    # Update the minimum cost if the total cost for this permutation is lower
    min_cost = min(min_cost, total_cost)

# Print the minimum cost
print(min_cost)