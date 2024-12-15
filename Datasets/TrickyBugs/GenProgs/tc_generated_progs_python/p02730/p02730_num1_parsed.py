**REPAIRED CODE**:

s = input()
is_strong_palindrome = False

if s == s[::-1]:  # Palindrome condition
    first_half = s[:len(s)//2]
    second_half = s[(len(s)+3)//2-1:]

    if first_half == first_half[::-1] and second_half == second_half[::-1]:
        is_strong_palindrome = True

if is_strong_palindrome:
    print('Yes')
else:
    print('No')