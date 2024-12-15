# Get input
S_A = input()
S_B = input()
S_C = input()

# Initialize variables
turn = 0  # 0 represents Alice's turn, 1 represents Bob's turn, 2 represents Charlie's turn
decks = [S_A, S_B, S_C]  # List to store the decks of the players

# Iterate until a deck is empty
while True:
    # Check if current player's deck is empty
    if len(decks[turn]) == 0:
        player_names = ['Alice', 'Bob', 'Charlie']
        print(player_names[turn][0])
        break

    # Get the top card from current player's deck
    card = decks[turn][0]

    # Update turn based on the letter on the card
    if card == 'a':
        turn = 0
    elif card == 'b':
        turn = 1
    elif card == 'c':
        turn = 2

    # Remove the top card from current player's deck
    decks[turn] = decks[turn][1:]
