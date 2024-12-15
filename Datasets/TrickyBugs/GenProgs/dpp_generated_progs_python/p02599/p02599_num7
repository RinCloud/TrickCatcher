# Program

N, Q = map(int, input().split())
balls = list(map(int, input().split()))

color_count = {}
for ball in balls:
    color_count[ball] = color_count.get(ball, 0) + 1

for _ in range(Q):
    l, r = map(int, input().split())
    diff_colors = len(set(balls[l-1:r]))
    print(diff_colors)