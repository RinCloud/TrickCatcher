def get_row(lst, x):
    output = []
    for i in range(len(lst)):
        for j in range(len(lst[i])):
            if lst[i][j] == x:
                output.append((i, j))
    output = sorted(output, key=lambda t: (t[0], -t[1]))  # sort by rows in ascending order, and by columns in descending order
    return output