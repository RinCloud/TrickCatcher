s = input()
is_strong_palindrome = False

# check if s is a palindrome
if s == s[::-1]:
    # check if the first half of s[0 to (N-1)/2-1] is a palindrome
    first_half = s[:len(s)//2]
    if first_half == first_half[::-1]:
        # check if the second half of s[(N+3)/2-1 to N-1] is a palindrome
        second_half = s[(len(s)+3)//2-1:]
        if second_half == second_half[::-1]:
            is_strong_palindrome = True

if is_strong_palindrome:
    print("Yes")
else:
    print("No")