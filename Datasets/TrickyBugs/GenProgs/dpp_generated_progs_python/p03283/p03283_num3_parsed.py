def count_trains(N, M, Q, trains, queries):
    result = []
    for query in queries:
        p, q = query
        count = 0
        for train in trains:
            L, R = train
            if p <= L and R <= q:
                count += 1
        result.append(count)
    return result

# sample inputs
N, M, Q = 2, 3, 1
trains = [(1, 1), (1, 2), (2, 2)]
queries = [(1, 2)]

print(count_trains(N, M, Q, trains, queries))

N, M, Q = 10, 3, 2
trains = [(1, 5), (2, 8), (7, 10)]
queries = [(1, 7), (3, 10)]

print(count_trains(N, M, Q, trains, queries))

N, M, Q = 10, 10, 10
trains = [(1, 6), (2, 9), (4, 5), (4, 7), (4, 7), (5, 8), (6, 6), (6, 7), (7, 9), (10, 10)]
queries = [(1, 8), (1, 9), (1, 10), (2, 8), (2, 9), (2, 10), (3, 8), (3, 9), (3, 10), (1, 10)]

print(count_trains(N, M, Q, trains, queries))