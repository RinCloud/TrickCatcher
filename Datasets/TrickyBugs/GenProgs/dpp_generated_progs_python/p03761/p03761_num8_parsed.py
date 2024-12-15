n = int(input())
strings = [input() for _ in range(n)]

# Initialize the frequency dictionary
freq_dict = {}
for string in strings:
    for char in string:
        freq_dict[char] = freq_dict.get(char, 0) + 1

# Find the longest strings
max_length = max(freq_dict.values())
longest_strings = [char for char, freq in freq_dict.items() if freq == max_length]

# Sort and print the lexicographically smallest string
if longest_strings:
    print(min(longest_strings))
else:
    print()