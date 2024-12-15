from collections import Counter

# Read the number of voting papers
N = int(input())

# Read the string on each voting paper
votes = []
for _ in range(N):
    votes.append(input())

# Count the occurrences of each string
count = Counter(votes)

# Find the maximum number of votes
max_votes = max(count.values())

# Filter the strings with the maximum number of votes
max_vote_strings = [string for string, vote_count in count.items() if vote_count == max_votes]

# Sort the strings lexicographically
max_vote_strings.sort()

# Print the result
for string in max_vote_strings:
    print(string)