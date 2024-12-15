import heapq

def solve(N, M, A):
    heap = []
    for a in A:
        heapq.heappush(heap, -a)

    for _ in range(M):
        a = -heapq.heappop(heap)
        heapq.heappush(heap, -(-a // 2))

    return sum(-a for a in heap)

N, M = map(int, input().split())
A = list(map(int, input().split()))

result = solve(N, M, A)
print(result)