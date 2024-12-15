import sys

def dfs(i, used, n, A, memo):
    if i == 2 * n:
        return 1
    
    key = (i, used)
    if key in memo:
        return memo[key]
    
    res = 0
    for j in range(2 * n):
        if not used[j] and A[i][j]:
            used[j] = True
            res += dfs(i + 1, used, n, A, memo)
            used[j] = False
    
    memo[key] = res
    return res

def solve(n, A):
    used = [False] * (2 * n)
    memo = {}
    return dfs(0, used, n, A, memo)

    
if __name__ == "__main__":
    n = int(input().strip())
    A = []
    for _ in range(2 * n):
        row = list(map(int, list(input().strip())))
        A.append(row)
    
    result = solve(n, A)
    print(result)