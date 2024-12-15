# Program to calculate the minimum number of minutes needed to make N pieces of takoyaki

# Read the input values for N, X, and T
N, X, T = map(int, input().split())

# Calculate the number of batches needed to make N takoyaki
batches = N // X

# Calculate the remaining takoyaki pieces that cannot be made in a full batch
remaining = N % X

# Calculate the total time needed to make the takoyaki
total_time = (batches + (remaining != 0)) * T

# Print the minimum number of minutes needed to make N pieces of takoyaki
print(total_time)