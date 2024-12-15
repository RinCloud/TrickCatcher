# Get the input values
N = int(input()) # Get the length of the sequence
sequence = list(map(int, input())) # Get the sequence

# Define the array to store the values of x
x = [[0] * (N+1-i) for i in range(1, N+1)]

# Initialize the first row of x with the values of the sequence
x[0] = sequence

# Calculate the remaining values of x using the given formula
for i in range(1, N):
    for j in range(N+1-i):
        x[i][j] = abs(x[i-1][j] - x[i-1][j+1])

# Print the value of x[N-1][0], which is x_{N,1}
print(x[N-1][0])