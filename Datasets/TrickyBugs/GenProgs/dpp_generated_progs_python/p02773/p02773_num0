# User inputs
N = int(input())
votes = [input() for _ in range(N)]

# Count the frequency of each vote
frequency = {}
for vote in votes:
    frequency[vote] = frequency.get(vote, 0) + 1

# Find the maximum frequency
max_frequency = max(frequency.values())

# Collect all votes that have the maximum frequency
max_votes = [vote for vote, freq in frequency.items() if freq == max_frequency]

# Sort the votes in lexicographical order
max_votes.sort()

# Print the result
for vote in max_votes:
    print(vote)