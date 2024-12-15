def card_game(N, M, K):
    mod = 1000000007
    
    # Initialize the counts for each player's deck
    alice = N
    bob = M
    charlie = K
    
    # Start the game with Alice's turn
    current_player = 'a'
    
    # Calculate the total number of cards
    total_cards = N + M + K
    
    # Initialize the count for Alice's victory
    alice_victory_count = 0
    
    # Iterate through all possible patterns of initial decks
    for i in range(3**total_cards):
        # Check if Alice's deck is empty
        if alice == 0:
            alice_victory_count += 1
            alice_victory_count %= mod
            continue
        
        # Discard the top card of the current player's deck
        if current_player == 'a':
            alice -= 1
        elif current_player == 'b':
            bob -= 1
        else:
            charlie -= 1
        
        # Update the current player based on the discarded card
        current_player = chr(ord('a') + (ord(current_player) - ord('a') + 1) % 3)
    
    return alice_victory_count % mod

# Read the input values
N, M, K = map(int, input().split())

# Call the card_game function and print the result
print(card_game(N, M, K))