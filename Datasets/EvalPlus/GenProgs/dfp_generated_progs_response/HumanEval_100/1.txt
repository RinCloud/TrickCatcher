def make_a_pile(n):
    pile = [n]
    for i in range(n - 1):
        if n % 2 == 0:
            pile.append(n + 2*i + 2)
        else:
            pile.append(n + 2*i + 1)
    return pile