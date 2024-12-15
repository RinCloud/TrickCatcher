# Take input of X and Y
X, Y = map(int, input().split())

# Initialize the maximum length to 0
max_length = 0

# Iterate over the range between X and Y (inclusive)
for i in range(X, Y + 1):
    # Set the current number as the first number in the sequence
    num = i
    # Initialize the length of the sequence to 1
    length = 1
    
    # Check if the next number is a multiple of the current number
    while num * 2 <= Y:
        # Set the next number as the current number multiplied by 2
        num = num * 2
        # Increase the length of the sequence
        length += 1
    
    # Update the maximum length if the current length is greater
    if length > max_length:
        max_length = length

# Print the maximum possible length of the sequence
print(max_length)
