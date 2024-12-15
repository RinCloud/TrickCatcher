# Getting Input
N = int(input())
a = list(map(int, list(input())))

# Generating the sequence
x = [[0] * (N+1-i) for i in range(1, N+1)]

for j in range(N):
    x[0][j] = a[j]

for i in range(1, N):
    for j in range(N+1-i):
        x[i][j] = abs(x[i-1][j] - x[i-1][j+1])

# Printing x[N,1]
print(x[N-1][0])