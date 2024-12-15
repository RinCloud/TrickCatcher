# Program

def play_card_game(deck_a, deck_b, deck_c):
    current_player = 'A'
    while True:
        if current_player == 'A':
            if len(deck_a) == 0:
                return 'A'
            current_card = deck_a[0]
            deck_a = deck_a[1:]
            current_player = current_card
        elif current_player == 'B':
            if len(deck_b) == 0:
                return 'B'
            current_card = deck_b[0]
            deck_b = deck_b[1:]
            current_player = current_card
        elif current_player == 'C':
            if len(deck_c) == 0:
                return 'C'
            current_card = deck_c[0]
            deck_c = deck_c[1:]
            current_player = current_card

deck_a = input()
deck_b = input()
deck_c = input()

winner = play_card_game(deck_a, deck_b, deck_c)
print(winner)