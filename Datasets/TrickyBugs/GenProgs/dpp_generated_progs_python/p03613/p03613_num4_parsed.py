from collections import Counter

# Read the input
N = int(input())
a = list(map(int, input().split()))

# Count the occurrences of each value in a
counts = Counter(a)

# Find the maximum count
max_count = max(counts.values())

# Print the maximum count
print(max_count)
