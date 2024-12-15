import math

N = int(input())
A = [input() for _ in range(2 * N)]

def dfs(v, match, used):
    used[v] = True
    for u in range(2 * N):
        if not used[u] and A[v][u] == '1':
            if match[u] == -1 or dfs(match[u], match, used):
                match[v] = u
                match[u] = v
                return True
    return False

def solve():
    match = [-1] * (2 * N)
    res = 0
    for v in range(2 * N):
        if match[v] == -1:
            used = [False] * (2 * N)
            if dfs(v, match, used):
                res += 1
    return res

result = solve()
print(result)