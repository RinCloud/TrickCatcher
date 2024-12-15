def make_a_pile(n):
    stones = []
    for i in range(n):
        if n % 2 == 0:
            stones.append(n + i * 2)
        else:
            stones.append(n + i * 2 + 1)
    return stones