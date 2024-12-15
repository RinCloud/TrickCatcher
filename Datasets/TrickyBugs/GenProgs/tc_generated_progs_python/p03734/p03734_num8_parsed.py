import sys
stdin = sys.stdin

# Helper function to read an integer from input
def ni(): return int(stdin.readline())

# Helper function to read a list of integers from input
def na(): return list(map(int, stdin.readline().split()))

# Helper function to read a list of lists of integers from input
def naa(N): return [na() for _ in range(N)]

# Helper function to read a string from input
def ns(): return stdin.readline().rstrip()  # ignore trailing spaces

N, W = na()
INF = float('inf')
w1,v1 = na()
dp = [[-INF] * (3*N+1) for _ in range(N+1)]
dp[0][0] = 0
for i in range(1, N+1):
    w, v = na()
    for j in range(1, i+1):
        for k in range(v, 3*N+1):
            dp[j][k] = max(dp[j][k], dp[j-1][k-v] + w)
    
ans = 0
for i in range(1, N+1):
    wmax = W - w1 * i
    if wmax < 0:
        break
    ans = max(ans, max(dp[i][:wmax+1]))

print(ans)
