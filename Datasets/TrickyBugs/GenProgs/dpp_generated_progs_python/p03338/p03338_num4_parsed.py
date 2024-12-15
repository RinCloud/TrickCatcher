def max_different_letters(N, S):
    max_diff_letters = 0
    for i in range(1, N):
        X = set(S[:i])
        Y = set(S[i:])
        max_diff_letters = max(max_diff_letters, len(X.intersection(Y)))

    return max_diff_letters


N = int(input())
S = input()

print(max_different_letters(N, S))