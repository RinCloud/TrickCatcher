# Read the input values
N = int(input())
K = int(input())

# Initialize the current value as 1
current_value = 1

# Perform N operations
for _ in range(N):
    # Calculate the value after performing operation A (doubling)
    value_after_A = current_value * 2

    # Calculate the value after performing operation B (increasing by K)
    value_after_B = current_value + K

    # Update the current value with the minimum of value_after_A and value_after_B
    current_value = min(value_after_A, value_after_B)

# Print the minimum possible value displayed on the board after N operations
print(current_value)