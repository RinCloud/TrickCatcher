import re

# Take input for length of string
N = int(input())

# Take input for the string
S = input()

# Find all occurrences of 'ABC' as contiguous subsequences in S
occurrences = re.findall('(?=ABC)', S)

# Print the number of occurrences
print(len(occurrences))