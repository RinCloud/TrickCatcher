# Program

def card_game_winner(S_A, S_B, S_C):
    players = {'A': list(S_A), 'B': list(S_B), 'C': list(S_C)}
    current_player = 'A'
    while True:
        if not players[current_player]:
            return current_player
        card = players[current_player].pop(0)
        current_player = card

S_A = input()
S_B = input()
S_C = input()

result = card_game_winner(S_A, S_B, S_C)
print(result)