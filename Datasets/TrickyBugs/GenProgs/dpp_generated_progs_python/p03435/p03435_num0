grid = []

# Taking grid as input
for _ in range(3):
    row = list(map(int, input().split()))
    grid.append(row)

# Checking the values of a_i and b_j
a = [grid[0][0] - grid[0][1], grid[0][0] - grid[0][2], grid[1][0] - grid[1][1]]
b = [grid[0][0] - grid[1][0], grid[0][0] - grid[2][0], grid[1][0] - grid[2][0]]

# Checking if Takahashi's statement is correct
correct = True
for i in range(3):
    for j in range(3):
        if grid[i][j] != a[i] + b[j]:
            correct = False
            break
    if not correct:
        break

# Printing the output
if correct:
    print("Yes")
else:
    print("No")