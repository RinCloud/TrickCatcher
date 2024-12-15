# Complete the function to check if a string is a palindrome
def is_palindrome(s):
    return s == s[::-1]

# Read the input string
s = input()

# Check if it is a palindrome
if is_palindrome(s):
    n = len(s)
    # Check if the first half of the string is a palindrome
    if is_palindrome(s[:int((n-1)/2)]):
        # Check if the second half of the string is a palindrome
        if is_palindrome(s[int((n+3)/2)-1:]):
            print("Yes")
            exit()

print("No")