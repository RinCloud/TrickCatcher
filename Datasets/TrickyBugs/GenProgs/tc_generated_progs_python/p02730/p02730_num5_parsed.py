s = input()
is_palindrome = s == s[::-1]
is_first_half_palindrome = s[:len(s)//2] == s[:len(s)//2][::-1]
is_second_half_palindrome = s[(len(s)+1)//2:] == s[(len(s)+1)//2:][::-1]

if is_palindrome and is_first_half_palindrome and is_second_half_palindrome:
    print('Yes')
else:
    print('No')
