s = input()

# check if S is a palindrome
is_palindrome = s == s[::-1]

# check if the string formed by the 1st through ((N-1)/2)-th characters of S is a palindrome
is_first_half_palindrome = s[:len(s)//2] == s[:len(s)//2][::-1]

# check if the string consisting of the (N+3)/2-th through N-th characters of S is a palindrome
is_second_half_palindrome = s[(len(s)+3)//2 - 1:] == s[(len(s)+3)//2 - 1:][::-1]

# check if all conditions are satisfied
if is_palindrome and is_first_half_palindrome and is_second_half_palindrome:
    print('Yes')
else:
    print('No')
