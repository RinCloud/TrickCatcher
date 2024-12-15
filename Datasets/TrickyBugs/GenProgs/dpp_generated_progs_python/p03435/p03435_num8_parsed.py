# Program

# Reading input
matrix = [[int(x) for x in input().split()] for _ in range(3)]

# Checking if Takahashi's statement is correct
is_correct = True
for i in range(3):
    for j in range(3):
        if matrix[i][j] != matrix[0][j] + matrix[i][0]:
            is_correct = False
            break

# Printing the result
if is_correct:
    print("Yes")
else:
    print("No")