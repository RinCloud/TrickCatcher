from heapq import heappop, heappush

def minimum_coins_to_reach_n(n, a, b, c, d):
    heap = [(0, 0)]  # (cost, number)
    visited = set()
    
    while heap:
        cost, num = heappop(heap)
        
        if num == n:
            return cost
        
        if num in visited:
            continue
        
        visited.add(num)
        
        if num < n:
            heappush(heap, (cost + a, num * 2))
            heappush(heap, (cost + b, num * 3))
            heappush(heap, (cost + c, num * 5))
        
        heappush(heap, (cost + d, num + 1))
        heappush(heap, (cost + d, num - 1))
    
    return -1  # unreachable

t = int(input())
for _ in range(t):
    n, a, b, c, d = map(int, input().split())
    print(minimum_coins_to_reach_n(n, a, b, c, d))