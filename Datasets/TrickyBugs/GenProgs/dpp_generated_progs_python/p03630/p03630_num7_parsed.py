# Let's find the maximum rectangle area
# Time Complexity: O(H * W)

def maximum_rectangle_area(h, w, grid):
    max_area = 0
    # Initialize row and column arrays with all values set to zero
    row = [0] * w
    col = [0] * h

    # Traverse each row and column to update the row and column arrays
    for i in range(h):
        for j in range(w):
            if grid[i][j] == '#':
                row[j] += 1
                col[i] += 1

    # Calculate the maximum area using the row and column arrays
    for i in range(h):
        for j in range(w):
            if grid[i][j] == '#':
                area = (row[j] + col[i]) - 1
                max_area = max(max_area, area)

    # Return the maximum possible area
    return max_area

# Input
h, w = map(int, input().split())
grid = [input() for _ in range(h)]

# Function call and output
print(maximum_rectangle_area(h, w, grid))