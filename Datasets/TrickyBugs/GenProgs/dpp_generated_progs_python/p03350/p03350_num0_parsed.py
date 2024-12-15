# Program:

import itertools

def find_longest_subsequence(N, K, X):
    S = [x for x in range(2 ** N)]
    combinations = itertools.combinations(S, K)
    longest_subsequence = ''
    
    for combination in combinations:
        subsequence = ''
        for j in range(N + 1):
            for index in combination:
                subsequence += X[j][index]
        
        if len(subsequence) > len(longest_subsequence):
            longest_subsequence = subsequence
        elif len(subsequence) == len(longest_subsequence) and subsequence < longest_subsequence:
            longest_subsequence = subsequence
    
    return longest_subsequence

# Read the input
N, K = map(int, input().split())
X = [input() for _ in range(N + 1)]

# Find the longest subsequence
result = find_longest_subsequence(N, K, X)

# Print the result
print(result)