n = int(input())
cards = list(map(int, input().split()))

counts = {}
for card in cards:
    if card in counts:
        counts[card] += 1
    else:
        counts[card] = 1

max_count = max(counts.values())
distinct_count = len(counts)

if max_count % 2 == 0:
    print(distinct_count)
else:
    print(distinct_count - 1)