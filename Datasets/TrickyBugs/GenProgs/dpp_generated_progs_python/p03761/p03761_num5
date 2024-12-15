'''
n = int(input())
s_list = [input() for _ in range(n)]

# Create a dictionary to store the count of each character in all strings
char_count = {}
for s in s_list:
    for char in set(s):
        char_count[char] = char_count.get(char, 0) + 1

# Find the characters that appear in all strings
common_chars = []
for char, count in char_count.items():
    if count == n:
        common_chars.append(char)

# Sort the common characters lexicographically
common_chars.sort()

# Print the lexicographically smallest common characters as the result
if common_chars:
    print(''.join(common_chars))
else:
    print()
'''