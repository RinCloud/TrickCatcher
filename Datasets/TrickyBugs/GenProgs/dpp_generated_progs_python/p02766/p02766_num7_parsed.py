# Given is an integer N. We need to find the number of digits that N has in base K.

# Read the input values N and K
N, K = map(int, input().split())

# Initialize a variable to count the number of digits
digit_count = 0

# Loop until N becomes 0
while N > 0:
    # Divide N by K to remove the rightmost digit
    N = N // K
    
    # Increment the digit_count
    digit_count += 1

# Print the number of digits in base K
print(digit_count)