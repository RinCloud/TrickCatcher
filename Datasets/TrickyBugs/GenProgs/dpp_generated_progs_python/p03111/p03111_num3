import sys

def dfs(i, a, b, c):
    if i == N:
        if min(a, b, c) > 0:
            return abs(a - A) + abs(b - B) + abs(c - C) - 30
        else:
            return float('inf')
  
    res = dfs(i + 1, a, b, c)
    res = min(res, dfs(i + 1, a + l[i], b, c) + 10)
    res = min(res, dfs(i + 1, a, b + l[i], c) + 10)
    res = min(res, dfs(i + 1, a, b, c + l[i]) + 10)

    return res

N, A, B, C = map(int, input().split())

l = [int(input()) for _ in range(N)]

ans = dfs(0, 0, 0, 0)
print(ans)