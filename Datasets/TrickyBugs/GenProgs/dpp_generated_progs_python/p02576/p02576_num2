# Get input from user
N, X, T = map(int, input().split())

# Calculate the number of batches needed to make N takoyaki
# If N is divisible by X, then N/X batches are needed
# Otherwise, N is not divisible by X, so N/X + 1 batches are needed
batches = N // X if N % X == 0 else N // X + 1

# Calculate the total time needed to make N takoyaki
total_time = batches * T

# Print the result
print(total_time)