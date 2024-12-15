def longest_acgt_substring(S):
    max_length = 0
    current_length = 0

    for char in S:
        if char in {'A', 'C', 'G', 'T'}:
            current_length += 1
        else:
            max_length = max(max_length, current_length)
            current_length = 0

    return max(max_length, current_length)

S = input()
print(longest_acgt_substring(S))
