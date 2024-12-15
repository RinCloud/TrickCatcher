# Getting the input
N, K = map(int, input().split())

# Calculating the number of ways to arrange the balls
arrangements = [[0] * (K+1) for _ in range(N+1)]
arrangements[0][0] = 1

for i in range(1, N+1):
    for j in range(1, K+1):
        arrangements[i][j] = (arrangements[i-1][j] + arrangements[i-1][j-1]) % (10**9 + 7)

# Printing the results
for i in range(1, K+1):
    print(arrangements[N][i])