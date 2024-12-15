# PROGRAM:

N = int(input())
a = list(input())

x = [[0 for _ in range(N)] for _ in range(N)]

for j in range(N):
    x[0][j] = int(a[j])

for i in range(1, N):
    for j in range(N - i):
        x[i][j] = abs(x[i - 1][j] - x[i - 1][j + 1])

print(x[N - 1][0])