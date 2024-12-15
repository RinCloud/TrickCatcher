def compare(game,guess):
    result = []
    for i in range(len(game)):
        if game[i]==guess[i]:
            result.append(0)
        else:
            result.append(abs(guess[i]-game[i]))
    return result