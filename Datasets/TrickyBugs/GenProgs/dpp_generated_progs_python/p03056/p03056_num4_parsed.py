def compute_complexity(grid):
    h, w = len(grid), len(grid[0])

    def is_homogeneous(x1, y1, x2, y2):
        color = grid[x1][y1]
        for i in range(x1, x2):
            for j in range(y1, y2):
                if grid[i][j] != color:
                    return False
        return True

    def divide(x1, y1, x2, y2):
        if is_homogeneous(x1, y1, x2, y2):
            return 0

        c1 = divide(x1, y1, (x1 + x2) // 2, y2)
        c2 = divide((x1 + x2) // 2, y1, x2, y2)
        return max(c1, c2) + 1

    return divide(0, 0, h, w)


if __name__ == "__main__":
    h, w = map(int, input().split())
    grid = [list(input().strip()) for _ in range(h)]

    complexity = compute_complexity(grid)
    print(complexity)
