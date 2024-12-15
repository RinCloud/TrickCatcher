from collections import defaultdict

# Read input
n = int(input())
strings = [input() for _ in range(n)]

# Count the number of strings that have the same suffix and length
suffix_counts = defaultdict(int)
for s in strings:
    if len(s) >= 2:
        suffix = s[-2:]
        suffix_counts[suffix] += 1

# Calculate the number of unordered pairs
pairs = 0
for count in suffix_counts.values():
    pairs += count * (count - 1) // 2

# Print the result
print(pairs)
