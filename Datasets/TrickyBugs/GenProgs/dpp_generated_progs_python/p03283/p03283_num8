def count_trains(N, M, Q, trains, queries):
    ans = []
    for qi in queries:
        p, q = qi
        count = 0
        for ti in trains:
            l, r = ti
            if p <= l and r <= q:
                count += 1
        ans.append(count)
    return ans

N, M, Q = map(int, input().split())
trains = []
for _ in range(M):
    L, R = map(int, input().split())
    trains.append((L, R))
queries = []
for _ in range(Q):
    p, q = map(int, input().split())
    queries.append((p, q))

output = count_trains(N, M, Q, trains, queries)

for o in output:
    print(o)