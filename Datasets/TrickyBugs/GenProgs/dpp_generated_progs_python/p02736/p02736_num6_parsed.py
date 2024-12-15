# Reading the input
N = int(input())
a = input()

# Initializing the matrix
x = [[None] * N for _ in range(N)]

# Filling the first row with the input digits
for j in range(N):
    x[0][j] = int(a[j])

# Filling the remaining rows
for i in range(1, N):
    for j in range(N-i):
        x[i][j] = abs(x[i-1][j] - x[i-1][j+1])

# Printing the result
print(x[N-1][0])