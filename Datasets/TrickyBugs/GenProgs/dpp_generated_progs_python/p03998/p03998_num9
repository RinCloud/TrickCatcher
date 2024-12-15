# PROGRAM

def play_card_game(s_a, s_b, s_c):
    players = [s_a, s_b, s_c]
    current_player = 0
    
    while len(players[current_player]) > 0:
        top_card = players[current_player][0]
        players[current_player] = players[current_player][1:]
        
        if top_card == 'a':
            current_player = 0
        elif top_card == 'b':
            current_player = 1
        elif top_card == 'c':
            current_player = 2
    
    if current_player == 0:
        return 'A'
    elif current_player == 1:
        return 'B'
    elif current_player == 2:
        return 'C'

# Read input
s_a = input()
s_b = input()
s_c = input()

# Call the function and print the result
print(play_card_game(s_a, s_b, s_c))