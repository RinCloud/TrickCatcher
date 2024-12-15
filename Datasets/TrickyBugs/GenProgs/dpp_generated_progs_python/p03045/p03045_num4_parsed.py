def find_min_cost(N, M, queries):
    # Initialize a set to track the remaining unknown cards
    unknown_cards = set(range(1, N+1))
    
    # Initialize a counter to track the total cost
    total_cost = 0
    
    # Iterate through the queries
    for query in queries:
        # Retrieve the query parameters
        X, Y, Z = query
    
        # Check if the sum of the two known cards and the unknown card is even
        if (X in unknown_cards or Y in unknown_cards) and (X not in unknown_cards or Y not in unknown_cards) and (Z % 2 == 0):
            # Determine the unknown card
            if X in unknown_cards:
                unknown_card = X
            else:
                unknown_card = Y
            
            # Remove the unknown card from the set of unknown cards
            unknown_cards.remove(unknown_card)
            
            # Increment the total cost
            total_cost += 1
    
    # Return the minimum total cost
    return total_cost

# Read the input
N, M = map(int, input().split())
queries = [list(map(int, input().split())) for _ in range(M)]

# Find the minimum cost to determine all cards
min_cost = find_min_cost(N, M, queries)

# Print the minimum cost
print(min_cost)
