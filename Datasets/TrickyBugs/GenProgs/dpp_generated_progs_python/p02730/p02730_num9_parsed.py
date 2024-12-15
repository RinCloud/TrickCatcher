# Getting the input
S = input()

# Checking if S is a palindrome
isPalindrome = S == S[::-1]

# Checking if the first half of S is a palindrome
firstHalf = S[:(len(S)-1)//2]
isFirstHalfPalindrome = firstHalf == firstHalf[::-1]

# Checking if the second half of S is a palindrome
secondHalf = S[(len(S)+3)//2-1:]
isSecondHalfPalindrome = secondHalf == secondHalf[::-1]

# Checking if S is a strong palindrome
if isPalindrome and isFirstHalfPalindrome and isSecondHalfPalindrome:
    print("Yes")
else:
    print("No")