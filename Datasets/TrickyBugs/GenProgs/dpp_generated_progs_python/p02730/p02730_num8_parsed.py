def is_palindrome(s):
    return s == s[::-1]

def is_strong_palindrome(s):
    n = len(s)
    first_half = s[:((n-1)//2)]
    second_half = s[((n+3)//2)-1:]
    
    return is_palindrome(s) and is_palindrome(first_half) and is_palindrome(second_half)

# Main code
s = input()
if is_strong_palindrome(s):
    print("Yes")
else:
    print("No")
