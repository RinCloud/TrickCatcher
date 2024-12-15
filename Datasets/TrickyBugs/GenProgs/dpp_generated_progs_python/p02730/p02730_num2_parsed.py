# Get input
S = input().strip()

# Check if S is a palindrome
if S == S[::-1]:
    # Check if the first half of S is a palindrome
    if S[:len(S)//2] == S[:len(S)//2][::-1]:
        # Check if the second half of S is a palindrome
        if S[(len(S)+3)//2 - 1:] == S[(len(S)+3)//2 - 1:][::-1]:
            print("Yes")
            exit()

print("No")