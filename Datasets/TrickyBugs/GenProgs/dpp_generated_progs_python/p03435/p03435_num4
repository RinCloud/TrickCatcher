# Complete Python program to solve the problem

def is_correct_grid(grid):
    # Extracting the grid values
    c = [[int(x) for x in row] for row in grid]

    # Extracting the individual elements
    a = [c[0][j] - c[0][0] for j in range(3)]
    b = [c[i][0] - c[0][0] for i in range(3)]

    # Checking if c[i][j] = a[i] + b[j] for all i, j
    for i in range(3):
        for j in range(3):
            if c[i][j] != a[i] + b[j]:
                return 'No'
    
    return 'Yes'

# Reading input grid from standard input
grid = [input().split() for _ in range(3)]

# Checking if the statement is correct
result = is_correct_grid(grid)

# Printing the result
print(result)