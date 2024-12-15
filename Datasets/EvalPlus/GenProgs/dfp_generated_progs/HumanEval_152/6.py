def compare(game, guess):
    return [abs(game[i] - guess[i]) if game[i] != guess[i] else 0 for i in range(len(game))]