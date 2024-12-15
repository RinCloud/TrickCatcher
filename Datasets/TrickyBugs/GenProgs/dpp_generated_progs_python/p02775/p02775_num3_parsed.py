# Read the input value N
N = int(input())

# Initialize count
count = 0

# Calculate the minimum number of banknotes used
while N > 0:
    # Find the maximum power of 10 that is less than or equal to N
    power = len(str(N)) - 1
    # Increment count by N // 10^power
    count += N // 10 ** power
    # Subtract the value of banknotes used from N
    N -= (N // 10 ** power) * 10 ** power

# Print the minimum number of banknotes used
print(count)
