# Given the constraints, we can use a greedy approach to solve this problem efficiently.
# To find the lexicographically smallest string, we can focus on minimizing the first character of the resulting string after each reverse and concatenation operation.
# First, we need to find the index of the minimum character in the string.
# Then, we reverse the string and concatenate it with the original string to create U.
# Finally, we take a substring of length N from U starting from the index of the minimum character.
# We repeat this process K times to find the lexicographically smallest possible string.

# Read the input values
N, K = map(int, input().split())
S = input()

# Find the index of the minimum character in the string
min_index = S.index(min(S))

# Reverse the string and concatenate it with the original string
U = S[::-1] + S

# Take a substring of length N from U starting from the index of the minimum character
S = U[min_index:min_index + N]

# Print the lexicographically smallest possible string
print(S)