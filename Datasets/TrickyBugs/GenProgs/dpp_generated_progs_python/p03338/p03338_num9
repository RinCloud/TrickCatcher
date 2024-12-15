# Program:

def maximize_different_letters(N, S):
    max_diff_letters = 0
    for i in range(1, N):
        X = S[:i]  # First part of the string
        Y = S[i:]  # Second part of the string
        
        diff_letters = len(set(X) & set(Y)) # Number of different letters in both X and Y
        
        if diff_letters > max_diff_letters:
            max_diff_letters = diff_letters
    
    return max_diff_letters

# Getting the input
N = int(input())
S = input()

# Calling the function and printing the output
print(maximize_different_letters(N, S))
