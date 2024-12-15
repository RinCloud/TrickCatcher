from collections import deque

# Function to calculate the count of Alice's victory patterns
def calculate_victory_patterns(N, M, K):
    # Modulus value
    MOD = 1000000007

    # Calculate the count of cards for each player
    total_cards = N + M + K

    # Array to store the count of patterns for each player
    pattern_count = [1] * (total_cards + 1)

    # Calculate the count of patterns for each player
    for i in range(total_cards):
        pattern_count[i + 1] = (pattern_count[i] * 3) % MOD

    # Initialize the count of Alice's victory patterns
    alice_victory_patterns = 0

    # Initialize the decks of each player
    alice_deck = deque(['a'] * N)
    bob_deck = deque(['b'] * M)
    charlie_deck = deque(['c'] * K)

    # Start the game with Alice's turn
    current_player = 'a'
    while True:
        # Check if Alice's deck is empty
        if current_player == 'a' and len(alice_deck) == 0:
            alice_victory_patterns += 1
            alice_victory_patterns %= MOD
            break
        
        # Check if Bob's deck is empty
        if current_player == 'b' and len(bob_deck) == 0:
            break
        
        # Check if Charlie's deck is empty
        if current_player == 'c' and len(charlie_deck) == 0:
            break
        
        # Discard the top card from the current player's deck
        if current_player == 'a':
            alice_deck.popleft()
        elif current_player == 'b':
            bob_deck.popleft()
        elif current_player == 'c':
            charlie_deck.popleft()
        
        # Update the current player based on the discarded card
        current_player = alice_deck[0] if current_player == 'a' else (bob_deck[0] if current_player == 'b' else 'c')
    
    # Calculate the count of Alice's victory patterns using the formula
    alice_victory_patterns = (alice_victory_patterns * pattern_count[total_cards - 1]) % MOD
    
    return alice_victory_patterns

# Read the input values
N, M, K = map(int, input().split())

# Calculate and print the count of Alice's victory patterns
result = calculate_victory_patterns(N, M, K)
print(result)