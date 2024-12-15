def get_row(lst, x):
    result = []
    for i in range(len(lst)):
        for j in range(len(lst[i])):
            if lst[i][j] == x:
                result.append((i, j))
    result.sort(key=lambda x: (x[0], -x[1]))
    return result