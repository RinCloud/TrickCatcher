def compare(game, guess):
    res = []
    for i in range(len(game)):
        if game[i] == guess[i]:
            res.append(0)
        else:
            res.append(abs(game[i] - guess[i]))
    return res