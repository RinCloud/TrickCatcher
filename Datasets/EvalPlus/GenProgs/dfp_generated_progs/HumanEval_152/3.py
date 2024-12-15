def compare(game, guess):
    return [abs(guess[i]-game[i]) if guess[i]!=game[i] else 0 for i in range(len(game))]