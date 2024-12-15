import sys

def solve(N, A, B, C, L):
    INF = float("inf")
    ans = INF

    def dfs(cur, a, b, c, mp):
        # base case: at least one of a,b,c is >0
        if cur == N:
            if min(a, b, c) > 0:
                return mp + abs(A - a) + abs(B - b) + abs(C - c)
            else:
                return INF
        else:
            # case 1: use extension magic
            ret0 = dfs(cur+1, a + L[cur], b, c, mp + (0 if L[cur] == 0 else 10))

            # case 2: use shortening magic
            ret1 = dfs(cur+1, a, b + L[cur], c, mp + (0 if L[cur] == 0 else 10))

            # case 3: use composition magic
            ret2 = dfs(cur+1, a, b, c + L[cur], mp + (0 if L[cur] == 0 else 10))

            # case 4: do nothing
            ret3 = dfs(cur+1, a, b, c, mp)

            return min(ret0, ret1, ret2, ret3)

    ans = dfs(0, 0, 0, 0, 0)
    return ans

# read input from Standard Input
input_lines = sys.stdin.readlines()
N, A, B, C = map(int, input_lines[0].split())
L = [int(x) for x in input_lines[1:]]

# solve the problem
ans = solve(N, A, B, C, L)

# print the answer
print(ans)