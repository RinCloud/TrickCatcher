n = int(input())

votes = []
for _ in range(n):
    s = input()
    votes.append(s)

vote_counts = {}
for vote in votes:
    if vote in vote_counts:
        vote_counts[vote] += 1
    else:
        vote_counts[vote] = 1

max_count = max(vote_counts.values())

most_voted = []
for vote, count in vote_counts.items():
    if count == max_count:
        most_voted.append(vote)

most_voted.sort()

for vote in most_voted:
    print(vote)