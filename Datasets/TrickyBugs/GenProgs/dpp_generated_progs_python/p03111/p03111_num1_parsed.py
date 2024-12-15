import sys

def dfs(d, a, b, c, res):
    if d == n:
        if a > 0 and b > 0 and c > 0:
            return abs(a - A) + abs(b - B) + abs(c - C) - 30
        else:
            return sys.maxsize
    t1 = dfs(d + 1, a, b, c, res)
    t2 = dfs(d + 1, a + l[d], b, c, res) + 10
    t3 = dfs(d + 1, a, b + l[d], c, res) + 10
    t4 = dfs(d + 1, a, b, c + l[d], res) + 10
    res = min(t1, t2, t3, t4)
    return res

if __name__ == "__main__":
    n, A, B, C = map(int, input().split())
    l = [int(input()) for _ in range(n)]
    
    ans = dfs(0, 0, 0, 0, sys.maxsize)
    print(ans)