N = int(input())
red_points = []
blue_points = []

for _ in range(N):
    x, y = map(int, input().split())
    red_points.append((x, y))

for _ in range(N):
    x, y = map(int, input().split())
    blue_points.append((x, y))

red_points.sort()
blue_points.sort()
count = 0
for red in red_points:
    for blue in blue_points:
        if red[0] < blue[0] and red[1] < blue[1]:
            count += 1
            blue_points.remove(blue)
            break
        
print(count)