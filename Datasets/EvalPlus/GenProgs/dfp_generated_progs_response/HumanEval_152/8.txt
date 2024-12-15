def compare(game, guess):
    return [0 if game[i] == guess[i] else abs(game[i] - guess[i]) for i in range(len(game))]