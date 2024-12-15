import re

# Read input from standard input
S = input()

# Find all substrings of S that contain only A, C, G, T
substrings = re.findall('[ACGT]+', S)

# Find the length of the longest ACGT substring
longest_length = 0
for substring in substrings:
    longest_length = max(longest_length, len(substring))

# Print the result
print(longest_length)