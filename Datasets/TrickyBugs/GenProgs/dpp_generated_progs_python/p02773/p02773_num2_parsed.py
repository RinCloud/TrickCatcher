# Program

from collections import Counter

# Read input
N = int(input())
votes = [input() for _ in range(N)]

# Count the occurrences of each vote
counter = Counter(votes)

# Find the maximum count
max_count = max(counter.values())

# Filter the votes with the maximum count
max_votes = [vote for vote, count in counter.items() if count == max_count]

# Sort the votes in lexicographical order
max_votes.sort()

# Print the results
for vote in max_votes:
    print(vote)