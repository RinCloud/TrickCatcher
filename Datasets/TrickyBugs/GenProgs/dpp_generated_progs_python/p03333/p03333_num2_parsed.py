n = int(input())
segments = []
for _ in range(n):
    l, r = map(int, input().split())
    segments.append((l, r))

# Sort the segments by their right coordinate in descending order
segments.sort(key=lambda segment: segment[1], reverse=True)

# Takahashi needs to walk to the leftmost point in the first segment and then to the rightmost point in the second segment,
# and so on, alternating between leftmost and rightmost points of the segments
total_distance = 0
for i in range(n):
    if i % 2 == 0:
        total_distance += segments[i][0]
    else:
        total_distance += segments[i][1]

print(total_distance)