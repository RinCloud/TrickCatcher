def count_card_selections(N, A, x):
    # Initialize the count to 0
    count = 0
    
    # Loop through all possible subsets of the cards
    for mask in range(1, 2**N):
        sum_of_cards = 0
        num_of_cards = 0
        
        # Check every card in the current subset
        for i in range(N):
            if (mask >> i) & 1:
                sum_of_cards += x[i]
                num_of_cards += 1
        
        # Check if the average of the selected cards is equal to A
        if (sum_of_cards / num_of_cards) == A:
            count += 1
    
    return count


# Read the input
N, A = map(int, input().split())
x = list(map(int, input().split()))

# Call the function and print the result
result = count_card_selections(N, A, x)
print(result)