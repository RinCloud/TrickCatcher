# Getting the input
N = int(input())
red_points = [list(map(int, input().split())) for _ in range(N)]
blue_points = [list(map(int, input().split())) for _ in range(N)]

# Sorting the points
red_points.sort()
blue_points.sort()

# Counting the number of friendly pairs
count = 0
for i in range(N):
    for j in range(N):
        if red_points[i][0] < blue_points[j][0] and red_points[i][1] < blue_points[j][1]:
            count += 1
            break

# Printing the result
print(count)