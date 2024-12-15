def count_trains(N, M, Q, trains, queries):
    count = []
    for i in range(Q):
        p, q = queries[i]
        cnt = 0
        for j in range(M):
            L, R = trains[j]
            if p <= L and R <= q:
                cnt += 1
        count.append(cnt)
    return count

N, M, Q = map(int, input().split())
trains = []
for _ in range(M):
    L, R = map(int, input().split())
    trains.append((L, R))
queries = []
for _ in range(Q):
    p, q = map(int, input().split())
    queries.append((p, q))

result = count_trains(N, M, Q, trains, queries)
for ans in result:
    print(ans)