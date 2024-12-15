def get_row(lst, x):
    result = []
    for i in range(len(lst)):
        row = lst[i]
        for j in range(len(row)):
            if row[j] == x:
                result.append((i, j))
    result.sort(key=lambda coord: (coord[0], -coord[1]))
    return result