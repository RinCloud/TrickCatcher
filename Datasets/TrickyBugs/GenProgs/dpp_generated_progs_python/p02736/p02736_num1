# taking input
N = int(input())
a = list(map(int, input()))

# defining 2D list to store x values
x = [[0] * (N-i+1) for i in range(N)]

# initializing x values for first row
for j in range(1, N+1):
    x[0][j] = a[j-1]

# calculating x values for remaining rows
for i in range(1, N):
    for j in range(1, N+1-i):
        x[i][j] = abs(x[i-1][j] - x[i-1][j+1])

# printing x[N-1][1]
print(x[N-1][1])