def find_minimum_distance(A, B, Q, shrines, temples, queries):
    inf = float("inf")
    shrines = [-inf] + shrines + [inf]
    temples = [-inf] + temples + [inf]

    for qi in queries:
        ans = inf
        for si in shrines:
            for ti in temples:
                # calculate distances
                x = qi
                if si <= qi <= ti:
                    d1 = qi - si
                    d2 = ti - qi
                    d = min(d1, d2) + abs(d1 - d2)
                    ans = min(ans, d)
        print(ans)


A, B, Q = map(int, input().split())
shrines = [int(input()) for _ in range(A)]
temples = [int(input()) for _ in range(B)]
queries = [int(input()) for _ in range(Q)]

find_minimum_distance(A, B, Q, shrines, temples, queries)
