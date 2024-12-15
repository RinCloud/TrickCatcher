# Obtain the input string
s = input()

# Check if the string is a palindrome
is_palindrome = s == s[::-1]

# Check if the first half of the string (excluding the middle character) is a palindrome
is_first_half_palindrome = s[:len(s)//2] == s[:len(s)//2][::-1]

# Check if the second half of the string is a palindrome
is_second_half_palindrome = s[(len(s)+1)//2:] == s[(len(s)+1)//2:][::-1]

# Check if all conditions are satisfied
if is_palindrome and is_first_half_palindrome and is_second_half_palindrome:
    print("Yes")
else:
    print("No")