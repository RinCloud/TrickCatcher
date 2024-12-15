def make_a_pile(n):
    stones = [n]
    for i in range(1, n):
        if n % 2 == 0:
            stones.append(n + 2 * i)
        else:
            stones.append(n + 2 * (i - 1))
    return stones