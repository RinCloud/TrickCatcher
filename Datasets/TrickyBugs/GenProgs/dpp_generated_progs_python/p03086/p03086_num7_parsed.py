import re

# Read input
S = input()

# Find all ACGT substrings
acgt_substrings = re.findall(r'[ACGT]+', S)

# Find the length of the longest ACGT substring
max_length = max([len(s) for s in acgt_substrings])

# Print the result
print(max_length)
