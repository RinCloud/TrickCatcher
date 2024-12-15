# Program

def card_game_winner(S_A, S_B, S_C):

    def play_game(current_player, decks):
        if decks[current_player]:
            current_card = decks[current_player].pop(0)
            return play_game(current_card, decks)
        else:
            return current_player

    decks = {'A': list(S_A), 'B': list(S_B), 'C': list(S_C)}
    return play_game('A', decks)

S_A = input()
S_B = input()
S_C = input()

winner = card_game_winner(S_A, S_B, S_C)
print(winner)