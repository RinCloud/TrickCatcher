from itertools import combinations

# Read the input string A
A = input()

# Iterate over possible lengths
for i in range(1, len(A) + 2):
    # Generate all possible strings of length i
    for string in combinations('abcdefghijklmnopqrstuvwxyz', i):
        # Check if string is a subsequence of A
        is_subsequence = True
        a_idx = 0
        for char in string:
            while a_idx < len(A) and A[a_idx] != char:
                a_idx += 1
            if a_idx >= len(A):
                is_subsequence = False
                break
            a_idx += 1

        # If string is not a subsequence of A
        if not is_subsequence:
            print(''.join(string))
            break
    else:
        continue
    break
