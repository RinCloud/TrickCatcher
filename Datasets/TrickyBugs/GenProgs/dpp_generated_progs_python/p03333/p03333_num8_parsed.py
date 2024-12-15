# Getting input
N = int(input())
segments = []
for _ in range(N):
    L, R = map(int, input().split())
    segments.append((L, R))

# Sorting segments based on their left coordinate
segments.sort()

# Calculating the total distance
total_distance = 0
for i in range(N):
    L, R = segments[i]
    total_distance += R - L

# Printing the total distance
print(total_distance)