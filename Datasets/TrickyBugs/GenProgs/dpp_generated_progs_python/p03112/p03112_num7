import bisect

# Read input
A, B, Q = map(int, input().split())
shrines = []
temples = []
for _ in range(A):
    shrines.append(int(input()))
for _ in range(B):
    temples.append(int(input()))
points = []
for _ in range(Q):
    points.append(int(input()))

# Add infinity values to the beginning and end of shrines and temples list
shrines = [-float('inf')] + shrines + [float('inf')]
temples = [-float('inf')] + temples + [float('inf')]

# Process queries
for point in points:
    # Find the nearest shrine and temple to the current point
    i = bisect.bisect_right(shrines, point)
    j = bisect.bisect_right(temples, point)
    # Calculate the minimum distance
    min_dist = float('inf')
    for s in [shrines[i-1], shrines[i]]:
        for t in [temples[j-1], temples[j]]:
            dist = abs(s - point) + abs(t - s)
            min_dist = min(min_dist, dist)
    print(min_dist)