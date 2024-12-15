def largest_possible_num_of_diff_letters(N, S):
    max_num_diff_letters = 0
    for i in range(1, N):
        x = set(S[:i])
        y = set(S[i:])
        num_diff_letters = len(x.intersection(y))
        if num_diff_letters > max_num_diff_letters:
            max_num_diff_letters = num_diff_letters
    return max_num_diff_letters

N = int(input())
S = input()

result = largest_possible_num_of_diff_letters(N, S)
print(result)