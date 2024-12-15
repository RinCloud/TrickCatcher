def is_palindrome(n):
    # Convert the integer to a string
    n_str = str(n)
    
    # Check if the string is a palindrome
    return n_str == n_str[::-1]

# Read the inputs
A, B = map(int, input().split())

# Initialize the counter variable
count = 0

# Iterate over the integers from A to B
for i in range(A, B+1):
    # Check if the integer is a palindrome
    if is_palindrome(i):
        # Increment the counter variable
        count += 1

# Print the number of palindromic numbers
print(count)
