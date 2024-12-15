def make_a_pile(n):
    stones = []
    # The first level has n stones
    stones.append(n)
    
    # Determine the next number of stones for each level
    for i in range(n-1):
        if n % 2 == 0:
            n += 1
        else:
            n += 2
        stones.append(n)
    
    return stones