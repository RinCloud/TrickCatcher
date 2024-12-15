W, H, N = map(int, input().split())

x_min, x_max = 0, W
y_min, y_max = 0, H

for _ in range(N):
    x, y, a = map(int, input().split())
    if a == 1:
        x_min = max(x_min, x)
    elif a == 2:
        x_max = min(x_max, x)
    elif a == 3:
        y_min = max(y_min, y)
    else:
        y_max = min(y_max, y)

white_area = max(0, x_max - x_min) * max(0, y_max - y_min)
print(white_area)