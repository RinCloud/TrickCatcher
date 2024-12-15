# Given a sequence of N digits, we need to find the value of x_{N,1} using the defined formula.

# Read the input values
N = int(input())
a = list(map(int, input()))

# Initialize a 2D array to store the values of x[i][j]
x = [[0] * (N+1-i) for i in range(N)]

# Set the initial values of x[1][j] as a[j]
for j in range(N):
    x[0][j] = a[j]

# Perform the calculations for x[i][j] using the defined formula
for i in range(1, N):
    for j in range(N+1-i):
        x[i][j] = abs(x[i-1][j] - x[i-1][j+1])

# Print the value of x[N][1]
print(x[N-1][0])