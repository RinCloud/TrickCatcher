def solve(n, a, b, c, lengths):
    def dfs(i, x, y, z):
        if i == n:
            return abs(x-a) + abs(y-b) + abs(z-c) - 30 if min(x,y,z) > 0 else float('inf')
        ret = dfs(i+1, x, y, z)
        ret = min(ret, dfs(i+1, x+lengths[i], y, z) + 10)
        ret = min(ret, dfs(i+1, x, y+lengths[i], z) + 10)
        ret = min(ret, dfs(i+1, x, y, z+lengths[i]) + 10)
        return ret
    return dfs(0, 0, 0, 0)
  
N, A, B, C = map(int, input().split())
L = [int(input()) for _ in range(N)]
print(solve(N, A, B, C, L))