import sys

def solve(h, w, grid):
    def dfs(i1, i2, j1, j2):
        cnt = 0
        for i in range(i1, i2):
            for j in range(j1, j2):
                if grid[i][j] == '#':
                    cnt += 1

        if cnt == 0 or cnt == (i2 - i1) * (j2 - j1):
            return 0

        res = sys.maxsize

        for i in range(i1 + 1, i2):
            res = min(res, max(dfs(i1, i, j1, j2), dfs(i, i2, j1, j2)))

        for j in range(j1 + 1, j2):
            res = min(res, max(dfs(i1, i2, j1, j), dfs(i1, i2, j, j2)))

        return res + 1

    return dfs(0, h, 0, w)

h, w = map(int, input().split())
grid = [input() for _ in range(h)]
print(solve(h, w, grid))
