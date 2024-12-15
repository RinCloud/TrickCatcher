def make_a_pile(n):
    stones = [n]
    for i in range(1, n):
        if n % 2 == 0:
            stones.append(stones[i-1] + 2)
        else:
            stones.append(stones[i-1] + 1)
    return stones