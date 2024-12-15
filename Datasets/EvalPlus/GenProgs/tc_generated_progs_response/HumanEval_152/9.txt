def compare(game,guess):
    result = []
    for i in range(len(game)):
        result.append(abs(game[i] - guess[i]))
    return result