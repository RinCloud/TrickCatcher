n = int(input())
balls = []
for _ in range(n):
    x, y = map(int, input().split())
    balls.append((x, y))

balls.sort()

r_max = balls[n - 1][0]
r_min = balls[0][0]
b_max = balls[n - 1][1]
b_min = balls[0][1]

minimum_value = (r_max - r_min) * (b_max - b_min)
print(minimum_value)