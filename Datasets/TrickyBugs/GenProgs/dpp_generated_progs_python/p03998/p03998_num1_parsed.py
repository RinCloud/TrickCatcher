# PROGRAM

def winner_of_card_game(S_A, S_B, S_C):
    current_player = 'A'

    while True:
        if current_player == 'A':
            if len(S_A) == 0:
                return 'A'
            card = S_A[0]
            S_A = S_A[1:]
        elif current_player == 'B':
            if len(S_B) == 0:
                return 'B'
            card = S_B[0]
            S_B = S_B[1:]
        elif current_player == 'C':
            if len(S_C) == 0:
                return 'C'
            card = S_C[0]
            S_C = S_C[1:]

        current_player = card

# Getting input
S_A = input().strip()
S_B = input().strip()
S_C = input().strip()

# Calling the function
result = winner_of_card_game(S_A, S_B, S_C)

# Printing the output
print(result)
