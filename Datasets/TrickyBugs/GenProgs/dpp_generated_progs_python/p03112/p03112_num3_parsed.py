"""
def solve(A, B, Q, shrines, temples, queries):
    # Calculate the nearest shrines and temples to each query point
    nearest_shrine = [None] * Q
    nearest_temple = [None] * Q

    # Find the nearest shrine to each query point
    for i in range(Q):
        x = queries[i]

        # Binary search to find the index of the nearest shrine
        left, right = 0, A - 1
        while left <= right:
            mid = (left + right) // 2
            if shrines[mid] <= x:
                left = mid + 1
            else:
                right = mid - 1

        # Calculate the distances to the nearest shrine
        if right >= 0:
            dist1 = x - shrines[right]
        else:
            dist1 = float('inf')
        if left < A:
            dist2 = shrines[left] - x
        else:
            dist2 = float('inf')

        nearest_shrine[i] = min(dist1, dist2)

    # Find the nearest temple to each query point
    for i in range(Q):
        x = queries[i]

        # Binary search to find the index of the nearest temple
        left, right = 0, B - 1
        while left <= right:
            mid = (left + right) // 2
            if temples[mid] <= x:
                left = mid + 1
            else:
                right = mid - 1

        # Calculate the distances to the nearest temple
        if right >= 0:
            dist1 = x - temples[right]
        else:
            dist1 = float('inf')
        if left < B:
            dist2 = temples[left] - x
        else:
            dist2 = float('inf')

        nearest_temple[i] = min(dist1, dist2)

    # Calculate the minimum distance for each query
    result = []
    for i in range(Q):
        result.append(min(nearest_shrine[i], nearest_temple[i]))

    return result

# Read input
A, B, Q = map(int, input().split())
shrines = [int(input()) for _ in range(A)]
temples = [int(input()) for _ in range(B)]
queries = [int(input()) for _ in range(Q)]

# Solve the problem
result = solve(A, B, Q, shrines, temples, queries)

# Print the result
for ans in result:
    print(ans)
"""