def compare(game, guess):
    result = []
    for score, g in zip(game, guess):
        if score == g:
            result.append(0)
        else:
            result.append(abs(score - g))
    return result