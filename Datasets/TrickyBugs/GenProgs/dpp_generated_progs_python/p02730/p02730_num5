s = input()

def is_palindrome(string):
    return string == string[::-1]

n = len(s)
first_half = s[:int((n - 1) / 2)]
second_half = s[int((n + 3) / 2) - 1:]

if is_palindrome(s) and is_palindrome(first_half) and is_palindrome(second_half):
    print("Yes")
else:
    print("No")