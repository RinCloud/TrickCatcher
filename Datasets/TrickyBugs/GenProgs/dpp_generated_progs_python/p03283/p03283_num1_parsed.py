# Parse Input
N, M, Q = map(int, input().split())
trains = []
for _ in range(M):
    L, R = map(int, input().split())
    trains.append((L, R))
queries = []
for _ in range(Q):
    p, q = map(int, input().split())
    queries.append((p, q))

# Count Trains
train_count = []
for query in queries:
    p, q = query
    count = 0
    for train in trains:
        L, R = train
        if p <= L and R <= q:
            count += 1
    train_count.append(count)

# Print Output
for count in train_count:
    print(count)