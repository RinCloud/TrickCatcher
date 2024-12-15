N = int(input())
balls = []
for _ in range(N):
    x, y = map(int, input().split())
    balls.append((x, y))

balls.sort()

red_max = balls[N-1][0]
red_min = balls[0][0]
blue_max = balls[N-1][1]
blue_min = balls[0][1]

result = (red_max - red_min) * (blue_max - blue_min)
print(result)