from heapq import heappush, heappop

def minimum_coins(N, A, B, C, D):
    visited = set()
    pq = [(0, 0)]  # prioritize the minimum number of coins
    while pq:
        coins, val = heappop(pq)
        if val == N:
            return coins
        if val in visited:
            continue
        visited.add(val)
        if val < N:
            heappush(pq, (coins + A, val * 2))
            heappush(pq, (coins + B, val * 3))
            heappush(pq, (coins + C, val * 5))
            heappush(pq, (coins + D, val + 1))
        heappush(pq, (coins + D, val - 1))

T = int(input())
for _ in range(T):
    N, A, B, C, D = map(int, input().split())
    print(minimum_coins(N, A, B, C, D))