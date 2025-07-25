def determine_winner(deck_a, deck_b, deck_c):
    current_player = 'A'
    while True:
        if current_player == 'A':
            if not deck_a:
                return 'A'
            current_card = deck_a[0]
            deck_a = deck_a[1:]
        elif current_player == 'B':
            if not deck_b:
                return 'B'
            current_card = deck_b[0]
            deck_b = deck_b[1:]
        elif current_player == 'C':
            if not deck_c:
                return 'C'
            current_card = deck_c[0]
            deck_c = deck_c[1:]
        
        if current_card == 'a':
            current_player = 'A'
        elif current_card == 'b':
            current_player = 'B'
        elif current_card == 'c':
            current_player = 'C'


deck_a = input().strip()
deck_b = input().strip()
deck_c = input().strip()

winner = determine_winner(deck_a, deck_b, deck_c)
print(winner)
