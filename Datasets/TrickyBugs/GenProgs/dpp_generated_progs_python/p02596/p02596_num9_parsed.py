# Get input
K = int(input())

# Initialize the position
position = -1

# Initialize the current number
num = 7

# Loop until we find the first multiple of K
while True:
    if num % K == 0:
        # Update the position
        position = len(str(num))
        break
    else:
        # Generate the next number
        num = num * 10 + 7

# Print the position
print(position)