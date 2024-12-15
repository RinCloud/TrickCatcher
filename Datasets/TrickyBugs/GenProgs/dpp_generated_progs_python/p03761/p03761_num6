from collections import Counter

# Read input values
n = int(input())
strings = [input().strip() for _ in range(n)]

# Initialize the counter dictionary
counter = Counter()

# Iterate through all the strings and count the frequency of each character
for string in strings:
    counter.update(string)

# Find the characters that occur in all strings
common_chars = [char for char, count in counter.items() if count == n]

# Sort the common characters lexicographically
common_chars.sort()

# Print the result
print("".join(common_chars))