def is_palindrome(s):
    return s == s[::-1]

def is_strong_palindrome(s):
    n = len(s)
    half_len = (n - 1) // 2
    first_half = s[:half_len]
    second_half = s[(n + 3) // 2 - 1:]
    return is_palindrome(s) and is_palindrome(first_half) and is_palindrome(second_half)

s = input()

if is_strong_palindrome(s):
    print("Yes")
else:
    print("No")