def compare(game, guess):
    result = [abs(game[i]-guess[i]) if game[i] != guess[i] else 0 for i in range(len(game))]
    return result