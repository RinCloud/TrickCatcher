# Getting input
N = int(input())
segments = []
for _ in range(N):
    L, R = map(int, input().split())
    segments.append((L, R))

# Sorting segments by L in descending order
segments.sort(key=lambda x: -x[0])

# Initializing total distance
K = 0

# Iterate through segments
for i in range(N):
    L, R = segments[i]
    # If segment is on the left side of 0
    if L <= 0:
        # Walk to the leftmost point of segment
        K += abs(L)
        # Adjust segment to only include positive values
        segments[i] = (0, R - L)
    # If segment spans across 0
    elif L <= R and R >= 0:
        # Walk to the rightmost point of segment
        K += R
        # Adjust segment to only include negative values
        segments[i] = (L - R, 0)
    # If segment is on the right side of 0
    elif L > 0:
        # Walk to the rightmost point of segment
        K += L
        # Adjust segment to only include negative values
        segments[i] = (L - R, 0)

print(K)