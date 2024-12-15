from heapq import heappop, heappush

def solve(N, M, A, queries):
    h = []
    for a in A:
        heappush(h, -a)
    
    for b, c in queries:
        for _ in range(b):
            if not h:
                break
            x = -heappop(h)
            if x <= -c:
                heappush(h, -c)
                break
    
    return sum(h)

N, M = map(int, input().split())
A = list(map(int, input().split()))
queries = [tuple(map(int, input().split())) for _ in range(M)]

ans = solve(N, M, A, queries)
print(ans)