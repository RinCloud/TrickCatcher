N = int(input())
K = int(input())

# Initialize the displayed value to 1
displayed_value = 1

# Perform N operations
for _ in range(N):
    # Check if doubling the displayed value produces a smaller value compared to adding K
    if displayed_value * 2 < displayed_value + K:
        displayed_value *= 2
    else:
        displayed_value += K

print(displayed_value)