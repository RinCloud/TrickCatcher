a1 = None
a2 = None
a3 = None
b1 = None
b2 = None
b3 = None

grid = []
for _ in range(3):
    row = list(map(int, input().split()))
    grid.append(row)

valid = True

for i in range(3):
    for j in range(3):
        if a1 is None:
            a1 = grid[i][j] - b1
        elif a2 is None and grid[i][j] - b2 != a1:
            valid = False
        elif a3 is None and grid[i][j] - b3 != a1:
            valid = False
        elif b1 is None:
            b1 = grid[i][j] - a1
        elif b2 is None and grid[i][j] - a2 != b1:
            valid = False
        elif b3 is None and grid[i][j] - a3 != b1:
            valid = False

if valid:
    print("Yes")
else:
    print("No")