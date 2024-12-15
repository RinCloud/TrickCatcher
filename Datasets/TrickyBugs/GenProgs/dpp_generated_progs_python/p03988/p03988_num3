import heapq

def construct_tree(N, a):
    # Create a max heap to store the distances
    distances = []
    for i in range(N):
        heapq.heappush(distances, -a[i])
    
    # Initialize variables
    edges = [0] * N
    
    # Build the tree
    for i in range(1, N):
        d = -heapq.heappop(distances)
        if d >= i:
            return "Impossible"
        edges[i] = d
        if i < N - 1:
            heapq.heappush(distances, -(d - 1))
    
    return "Possible"

N = int(input())
a = list(map(int, input().split()))

result = construct_tree(N, a)
print(result)