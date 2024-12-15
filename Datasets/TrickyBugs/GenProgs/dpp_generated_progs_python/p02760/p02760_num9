import numpy as np

# Read input
A = []
for _ in range(3):
    A.append(list(map(int, input().split())))
N = int(input())
b = [int(input()) for _ in range(N)]

# Create a blank bingo sheet
sheet = np.zeros((3, 3))

# Mark the numbers on the bingo sheet
for num in b:
    for i in range(3):
        for j in range(3):
            if A[i][j] == num:
                sheet[i][j] = 1

# Check for bingo
bingo = False

# Check rows
if any(all(row) for row in sheet):
    bingo = True

# Check columns
if any(all(col) for col in sheet.T):
    bingo = True

# Check diagonals
if all(sheet[i][i] for i in range(3)):
    bingo = True
if all(sheet[i][2 - i] for i in range(3)):
    bingo = True

# Print result
if bingo:
    print("Yes")
else:
    print("No")