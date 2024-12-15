def max_diff_letters(N, S):
    unique_letters = set(S)
    max_diff = 0
    
    for i in range(1, N):
        X = set(S[:i])
        Y = set(S[i:])
        diff_letters = len(X.intersection(Y))
        max_diff = max(max_diff, diff_letters)
    
    return max_diff

N = int(input())
S = input()

print(max_diff_letters(N, S))