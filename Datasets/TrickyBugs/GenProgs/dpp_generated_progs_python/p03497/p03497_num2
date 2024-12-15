from collections import Counter

N, K = map(int, input().split())
A = list(map(int, input().split()))

# Count the frequency of each number
frequency = Counter(A)

# Sort the count in descending order
sorted_count = sorted(frequency.values(), reverse=True)

# Calculate the minimum number of balls that need to be rewritten
min_rewrite = sum(sorted_count[K:])

print(min_rewrite)