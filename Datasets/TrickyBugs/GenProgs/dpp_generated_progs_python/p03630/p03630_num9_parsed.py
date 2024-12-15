def max_rectangle_area(H, W, grid):
    left = [0] * W
    right = [W] * W
    height = [0] * W
    max_area = 0

    for i in range(H):
        cur_left = 0
        cur_right = W
        for j in range(W):
            if grid[i][j] == '#':
                height[j] = 0
                left[j] = 0
                cur_left = j + 1
            else:
                height[j] += 1
                left[j] = max(left[j], cur_left)

        for j in range(W - 1, -1, -1):
            if grid[i][j] == '#':
                right[j] = W
                cur_right = j
            else:
                right[j] = min(right[j], cur_right)

        for j in range(W):
            max_area = max(max_area, height[j] * (right[j] - left[j]))

    return max_area


H, W = map(int, input().split())
grid = [input() for _ in range(H)]
print(max_rectangle_area(H, W, grid))
