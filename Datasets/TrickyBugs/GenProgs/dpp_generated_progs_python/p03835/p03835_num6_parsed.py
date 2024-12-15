# Taking input from the user
K, S = map(int, input().split())

# Counter for the number of valid assignments
count = 0

# Loop through all possible values of X
for X in range(K + 1):
    # Loop through all possible values of Y
    for Y in range(K + 1):
        # Calculate the value of Z
        Z = S - X - Y
        # Check if Z is within the range [0, K]
        if 0 <= Z <= K:
            # Increment the counter if the values of X, Y, and Z satisfy the condition
            count += 1

# Print the number of valid assignments
print(count)