# Read input
N = int(input())
segments = []
for _ in range(N):
    L, R = map(int, input().split())
    segments.append((L, R))

# Sort the segments based on their right end point in descending order
segments.sort(key=lambda x: -x[1])

# Move to the rightmost point of the first segment
current_pos = segments[0][1]
total_distance = current_pos

# Iterate through the remaining segments
for i in range(1, N):
    L, R = segments[i]
    # If the segment is to the left of the current position, move to its left end point
    if R < current_pos:
        current_pos = L
    # If the segment is to the right of the current position, move to its right end point
    elif L > current_pos:
        current_pos = R
    # If the segment contains the current position, calculate the distances to both ends and choose the minimum
    else:
        distance_to_left = current_pos - L
        distance_to_right = R - current_pos
        if distance_to_left < distance_to_right:
            current_pos = L
        else:
            current_pos = R
    total_distance += abs(current_pos)

# Print the total distance traveled
print(total_distance)