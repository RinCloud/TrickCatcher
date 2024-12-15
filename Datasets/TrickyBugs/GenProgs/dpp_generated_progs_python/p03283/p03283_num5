def main():
    N, M, Q = map(int, input().split())

    trains = []
    for _ in range(M):
        L, R = map(int, input().split())
        trains.append((L, R))

    queries = []
    for _ in range(Q):
        p, q = map(int, input().split())
        queries.append((p, q))

    num_trains = []
    for p, q in queries:
        count = 0
        for L, R in trains:
            if p <= L and R <= q:
                count += 1
        num_trains.append(count)

    for count in num_trains:
        print(count)

if __name__ == '__main__':
    main()