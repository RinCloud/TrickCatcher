def solve(W, H, N, points):
    area = W * H
    for x, y, a in points:
        if a == 1:
            area = min(area, x * H)
        elif a == 2:
            area = min(area, (W-x) * H)
        elif a == 3:
            area = min(area, W * y)
        elif a == 4:
            area = min(area, W * (H-y))
    return area

W, H, N = map(int, input().split())
points = []
for _ in range(N):
    x, y, a = map(int, input().split())
    points.append((x, y, a))

result = solve(W, H, N, points)
print(result)