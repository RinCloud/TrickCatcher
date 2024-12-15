s = input()

def is_palindrome(s):
    return s == s[::-1]

n = len(s)
first_half = s[:n // 2]
second_half = s[(n + 1) // 2:]

result = 'Yes' if is_palindrome(s) and is_palindrome(first_half) and is_palindrome(second_half) else 'No'

print(result)