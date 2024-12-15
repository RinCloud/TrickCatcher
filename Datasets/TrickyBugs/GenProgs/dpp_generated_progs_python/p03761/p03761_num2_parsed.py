from collections import Counter

n = int(input())
strings = [input() for _ in range(n)]

# Create a Counter for each string in the input
counters = [Counter(s) for s in strings]

# Find the common characters among all the strings
common_chars = set(counters[0].keys())
for counter in counters[1:]:
    common_chars &= set(counter.keys())

# Find the longest string using the common characters
longest_string = ""
for char in sorted(common_chars):
    count = min(counter[char] for counter in counters)
    longest_string += char * count

print(longest_string)