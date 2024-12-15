def fruit_distribution(s, n):
    apples_oranges = s.split()
    apples = int(apples_oranges[0])
    oranges = int(apples_oranges[-2])
    return n - apples - oranges