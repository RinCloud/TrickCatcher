def make_a_pile(n):
    pile = []
    for i in range(n):
        if n % 2 == 0:
            pile.append(n + 1 + 2 * i)
        else:
            pile.append(n + 2 * i)
    return pile