def get_row(lst, x):
    coordinates = []
    for i in range(len(lst)):
        row = lst[i]
        for j in range(len(row)):
            if row[j] == x:
                coordinates.append((i, j))
    coordinates.sort(key=lambda x: (x[0], -x[1]))
    return coordinates