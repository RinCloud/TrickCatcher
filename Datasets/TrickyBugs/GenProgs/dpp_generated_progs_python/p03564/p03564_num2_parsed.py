# Getting the input values
N = int(input())
K = int(input())

# Initializing the current value on the board to 1
current_value = 1

# Performing N operations
for _ in range(N):
    # Checking which operation to perform based on the remainder of the current value divided by K
    remainder = current_value % K
    if remainder <= K // 2:
        # Operation A: doubling the current value
        current_value *= 2
    else:
        # Operation B: increasing the current value by K
        current_value += K

# Printing the minimum possible value displayed on the board after N operations
print(current_value)