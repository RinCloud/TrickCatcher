import heapq

def solve(N, M, A):
    heap = []
    for a in A:
        heapq.heappush(heap, -a)
    
    for _ in range(M):
        price = -heapq.heappop(heap)
        price = price // 2
        heapq.heappush(heap, -price)
    
    return -sum(heap)
    
# Read input
N, M = map(int, input().split())
A = list(map(int, input().split()))

# Solve the problem
ans = solve(N, M, A)

# Print the answer
print(ans)