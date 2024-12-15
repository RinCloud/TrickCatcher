import heapq

def max_sum_of_cards(N, M, A, operations):
    heap = []
    for i in range(N):
        heapq.heappush(heap, (-A[i], i))
    
    for b, c in operations:
        for _ in range(min(b, len(heap))):
            _, idx = heapq.heappop(heap)
            heapq.heappush(heap, (-c, idx))
    
    return -sum([x[0] for x in heap])

# Read input from stdin
N, M = map(int, input().split())

A = list(map(int, input().split()))

operations = []
for _ in range(M):
    B, C = map(int, input().split())
    operations.append((B, C))

# Call function and print result
print(max_sum_of_cards(N, M, A, operations))