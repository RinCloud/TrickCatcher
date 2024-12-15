W, H, N = map(int, input().split())

# Create a matrix to represent the white region
white_region = [[True] * W for _ in range(H)]

# Iterate through each point and paint the corresponding region black
for _ in range(N):
    x, y, a = map(int, input().split())
    if a == 1:  # Paint the region satisfying x < x_i
        for i in range(H):
            for j in range(x):
                white_region[i][j] = False
    elif a == 2:  # Paint the region satisfying x > x_i
        for i in range(H):
            for j in range(x + 1, W):
                white_region[i][j] = False
    elif a == 3:  # Paint the region satisfying y < y_i
        for i in range(y):
            for j in range(W):
                white_region[i][j] = False
    elif a == 4:  # Paint the region satisfying y > y_i
        for i in range(y + 1, H):
            for j in range(W):
                white_region[i][j] = False

# Count the number of white cells in the matrix
area = sum(white_region[i][j] for i in range(H) for j in range(W))

print(area)