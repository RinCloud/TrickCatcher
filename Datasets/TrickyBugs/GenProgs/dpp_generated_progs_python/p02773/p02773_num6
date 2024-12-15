from collections import Counter

# Read input
N = int(input())
votes = [input() for _ in range(N)]

# Count the occurrences of each string in the votes
count = Counter(votes)

# Find the maximum number of votes
max_votes = max(count.values())

# Find the strings with the maximum number of votes
max_vote_strings = [s for s, c in count.items() if c == max_votes]

# Sort the strings in lexicographical order
max_vote_strings.sort()

# Print the result
for s in max_vote_strings:
    print(s)