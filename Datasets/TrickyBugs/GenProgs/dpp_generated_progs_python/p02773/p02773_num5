# Program:

from collections import Counter

# Read the input
N = int(input())
votes = [input() for _ in range(N)]

# Count the frequency of each vote
vote_counts = Counter(votes)

# Find the maximum count
max_count = max(vote_counts.values())

# Find all the votes with the maximum count
max_votes = [vote for vote, count in vote_counts.items() if count == max_count]

# Sort the votes lexicographically
max_votes.sort()

# Print the result
for vote in max_votes:
    print(vote)