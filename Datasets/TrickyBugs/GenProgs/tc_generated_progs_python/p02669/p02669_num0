**Repaired Code**:

from heapq import heapify, heappop, heappush
from collections import defaultdict
Inf = 10**28
inpl = lambda: list(map(int,input().split()))
T = int(input())
for _ in range(T):
    N, A, B, C, D = inpl()
    visited = defaultdict(lambda: Inf)
    ans = Inf
    pool = [(0,N)] # coin, number
    while pool:
        c, n = heappop(pool)
        if c > visited[n]:
            continue
        visited[n] = c
        if n == 0:
            if c < ans:
                ans = c
            continue
        if c >= ans:
            break

        for mag, cost in [(2,A), (3,B), (5,C)]:
            m = (n+mag//2)//mag
            q = c + abs(n - mag*m)*D + cost
            if q < visited[m]:
                visited[m] = q
                heappush(pool, (q, m))

    print(ans)