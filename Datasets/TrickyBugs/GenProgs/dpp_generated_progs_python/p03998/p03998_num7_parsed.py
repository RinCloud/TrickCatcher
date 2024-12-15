deck_a = input().strip()
deck_b = input().strip()
deck_c = input().strip()

current_player = 'A'

while True:
    if current_player == 'A':
        if len(deck_a) == 0:
            print('A')
            break
        else:
            current_card = deck_a[0]
            deck_a = deck_a[1:]
            current_player = 'A' if current_card == 'a' else 'B' if current_card == 'b' else 'C'
    elif current_player == 'B':
        if len(deck_b) == 0:
            print('B')
            break
        else:
            current_card = deck_b[0]
            deck_b = deck_b[1:]
            current_player = 'A' if current_card == 'a' else 'B' if current_card == 'b' else 'C'
    elif current_player == 'C':
        if len(deck_c) == 0:
            print('C')
            break
        else:
            current_card = deck_c[0]
            deck_c = deck_c[1:]
            current_player = 'A' if current_card == 'a' else 'B' if current_card == 'b' else 'C'