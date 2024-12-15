n, m = map(int, input().split())
votes = list(map(int, input().split()))

total_votes = sum(votes)
min_votes = total_votes / (4 * m)

popular_items = [vote for vote in votes if vote >= min_votes]

if len(popular_items) >= m:
    print("Yes")
else:
    print("No")