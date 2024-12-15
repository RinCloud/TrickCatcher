def card_game_winner(S_A, S_B, S_C):
    curr_player = 'A'
    while True:
        if curr_player == 'A':
            if len(S_A) == 0:
                return curr_player
            curr_player = S_A[0]
            S_A = S_A[1:]
        elif curr_player == 'B':
            if len(S_B) == 0:
                return curr_player
            curr_player = S_B[0]
            S_B = S_B[1:]
        elif curr_player == 'C':
            if len(S_C) == 0:
                return curr_player
            curr_player = S_C[0]
            S_C = S_C[1:]

S_A = input()
S_B = input()
S_C = input()

winner = card_game_winner(S_A, S_B, S_C)
print(winner)
