def compare(game, guess):
    result = [abs(game[i] - guess[i]) for i in range(len(game))]
    return result