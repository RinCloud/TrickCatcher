# Read inputs
K, S = map(int, input().split())

# Initialize count variable
count = 0

# Loop through X, Y, and Z values
for x in range(K+1):
    for y in range(K+1):
        for z in range(K+1):
            # Check if sum is equal to S
            if x + y + z == S:
                # Increment count variable
                count += 1

# Print count variable
print(count)
