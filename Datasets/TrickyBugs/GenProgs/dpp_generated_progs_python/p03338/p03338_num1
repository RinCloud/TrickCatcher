def find_largest_num_of_different_letters(N, S):
    max_num = 0
    for i in range(1, N):
        X = set(S[:i])
        Y = set(S[i:])
        num_of_different_letters = len(X.intersection(Y))
        max_num = max(max_num, num_of_different_letters)
    return max_num

N = int(input())
S = input()

result = find_largest_num_of_different_letters(N, S)
print(result)