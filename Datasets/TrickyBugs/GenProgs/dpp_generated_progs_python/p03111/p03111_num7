n, a, b, c = map(int, input().split())
l = [int(input()) for _ in range(n)]

INF = float("inf")

def dfs(cur, x, y, z):
    if cur == n:
        if min(x, y, z) > 0:
            return abs(x - a) + abs(y - b) + abs(z - c) - 30
        else:
            return INF

    res0 = dfs(cur + 1, x, y, z)
    res1 = dfs(cur + 1, x + l[cur], y, z) + 10
    res2 = dfs(cur + 1, x, y + l[cur], z) + 10
    res3 = dfs(cur + 1, x, y, z + l[cur]) + 10

    return min(res0, res1, res2, res3)

print(dfs(0, 0, 0, 0))