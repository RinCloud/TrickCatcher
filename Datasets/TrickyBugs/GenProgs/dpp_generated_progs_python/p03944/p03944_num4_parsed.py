W, H, N = map(int, input().split())

rectangle = [[0] * (H + 1) for _ in range(W + 1)]

for _ in range(N):
    x, y, a = map(int, input().split())
    if a == 1:
        for i in range(x):
            for j in range(H + 1):
                rectangle[i][j] = 1
    elif a == 2:
        for i in range(x + 1, W + 1):
            for j in range(H + 1):
                rectangle[i][j] = 1
    elif a == 3:
        for i in range(W + 1):
            for j in range(y):
                rectangle[i][j] = 1
    elif a == 4:
        for i in range(W + 1):
            for j in range(y + 1, H + 1):
                rectangle[i][j] = 1

area = sum(sum(row) for row in rectangle)
print(area)