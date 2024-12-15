import heapq

X, Y, Z, K = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))
C = list(map(int, input().split()))

# Sort the deliciousness of the cakes in descending order
A.sort(reverse=True)
B.sort(reverse=True)
C.sort(reverse=True)

# Create a heap containing the tuples (sum, i, j, k), where sum is the sum of the deliciousness of the cakes in the i-th, j-th and k-th positions
# Initialize the heap with the tuple (A[0] + B[0] + C[0], 0, 0, 0)
heap = [(-(A[0] + B[0] + C[0]), 0, 0, 0)]

# Set to keep track of the combinations of cakes that have already been added to the heap
visited = set((0, 0, 0))

# Iterate K times to find the K largest sums of deliciousness
for _ in range(K):
    # Pop the tuple with the largest sum of deliciousness from the heap
    neg_sum, i, j, k = heapq.heappop(heap)
    sum_ = -neg_sum

    # Print the sum of deliciousness
    print(sum_)

    # Add the tuples (A[i+1] + B[j] + C[k], i+1, j, k), (A[i] + B[j+1] + C[k], i, j+1), (A[i] + B[j] + C[k+1], i, j, k+1) to the heap if they have not been visited
    if i+1 < X and (i+1, j, k) not in visited:
        heapq.heappush(heap, (-(A[i+1] + B[j] + C[k]), i+1, j, k))
        visited.add((i+1, j, k))
    if j+1 < Y and (i, j+1, k) not in visited:
        heapq.heappush(heap, (-(A[i] + B[j+1] + C[k]), i, j+1, k))
        visited.add((i, j+1, k))
    if k+1 < Z and (i, j, k+1) not in visited:
        heapq.heappush(heap, (-(A[i] + B[j] + C[k+1]), i, j, k+1))
        visited.add((i, j, k+1))