def max_earnings(N, cards, M, queries):
    earnings = 0
    for q in queries:
        earnings += cards.count(q)

    return earnings

N = int(input())
cards = []
for _ in range(N):
    cards.append(input())

M = int(input())
queries = []
for _ in range(M):
    queries.append(input())

result = max_earnings(N, cards, M, queries)
print(result)