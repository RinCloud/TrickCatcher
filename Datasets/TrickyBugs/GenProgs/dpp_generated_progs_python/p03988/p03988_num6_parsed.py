import heapq

def solve(N, A):
    # Build a heap with negative values of A
    pq = []
    for i in range(N):
        heapq.heappush(pq, -A[i])

    # Initialize distances with all zeros
    distances = [0] * N

    # Assign distances to vertices
    for i in range(N):
        # Pop the largest negative value from pq
        d = -heapq.heappop(pq)

        # Check if the distance is greater than the remaining vertices
        if d > N - i - 1:
            return "Impossible"

        # Assign the distance to vertex i
        distances[i] = d

        # Decrement the distances of the remaining vertices
        for j in range(i + 1, N):
            distances[j] -= 1

        # Push the updated distances into pq
        for j in range(i + 1, N):
            heapq.heappush(pq, -distances[j])

    return "Possible"

# Read input
N = int(input())
A = list(map(int, input().split()))

# Solve the problem and print the result
print(solve(N, A))