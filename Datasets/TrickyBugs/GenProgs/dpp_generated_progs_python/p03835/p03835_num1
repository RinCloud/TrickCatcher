# Taking input from the user
K, S = map(int, input().split())

# Initializing the count of valid triples to 0
count = 0

# Loop to iterate through all possible values of X, Y, and Z
for X in range(K + 1):
    for Y in range(K + 1):
        Z = S - X - Y
        # Checking if the values of X, Y, and Z satisfy the condition
        if 0 <= Z <= K:
            count += 1

# Printing the count of valid triples
print(count)