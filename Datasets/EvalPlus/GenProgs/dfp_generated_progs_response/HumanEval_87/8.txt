def get_row(lst, x):
    coordinates = []
    for row in range(len(lst)):
        for col in range(len(lst[row])):
            if lst[row][col] == x:
                coordinates.append((row, col))
    coordinates.sort(key=lambda x: (x[0], -x[1]))
    return coordinates