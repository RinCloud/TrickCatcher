from collections import Counter

# read the input
N = int(input())
votes = []
for _ in range(N):
    vote = input()
    votes.append(vote)

# count the frequency of each vote
vote_counts = Counter(votes)

# find the maximum vote count
max_count = max(vote_counts.values())

# get all the votes with the maximum count and sort them in lexicographical order
max_votes = sorted([vote for vote, count in vote_counts.items() if count == max_count])

# print the result
for vote in max_votes:
    print(vote)