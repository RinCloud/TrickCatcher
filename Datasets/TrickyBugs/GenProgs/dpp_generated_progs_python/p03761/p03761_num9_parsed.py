from collections import Counter

def longest_common_string(strings):
    common_chars = Counter(strings[0])
    for i in range(1, len(strings)):
        common_chars &= Counter(strings[i])
    longest_common = ""
    for char, count in common_chars.items():
        longest_common += char * count
    return longest_common

n = int(input())
strings = []
for _ in range(n):
    strings.append(input().strip())

longest_common = longest_common_string(strings)
print(longest_common)