def largest_different_letters(N, S):
    max_diff_letters = 0
    for i in range(1, N):
        X = set(S[:i])
        Y = set(S[i:])
        diff_letters = len(X.intersection(Y))
        max_diff_letters = max(max_diff_letters, diff_letters)
    return max_diff_letters

N = int(input())
S = input()

result = largest_different_letters(N, S)
print(result)