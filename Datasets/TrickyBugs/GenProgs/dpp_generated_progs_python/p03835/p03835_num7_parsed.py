'''
PROGRAM:

# Read inputs
K, S = map(int, input().split())

# Initialize count to 0
count = 0

# Loop through all possible values of X, Y, and Z
for X in range(K+1):
    for Y in range(K+1):
        # Calculate Z based on the given condition X + Y + Z = S
        Z = S - X - Y
        
        # Check if the values of X, Y, and Z satisfy the condition
        if 0 <= Z <= K:
            count += 1

# Print the count
print(count)
'''