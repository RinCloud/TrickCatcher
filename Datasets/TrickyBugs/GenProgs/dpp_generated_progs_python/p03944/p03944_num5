W, H, N = map(int, input().split())
rectangle = [[0 for _ in range(W)] for _ in range(H)]
for _ in range(N):
    x, y, a = map(int, input().split())
    if a == 1:
        for i in range(x):
            for j in range(H):
                rectangle[j][i] = 1
    elif a == 2:
        for i in range(x+1, W):
            for j in range(H):
                rectangle[j][i] = 1
    elif a == 3:
        for i in range(W):
            for j in range(y):
                rectangle[j][i] = 1
    elif a == 4:
        for i in range(W):
            for j in range(y+1, H):
                rectangle[j][i] = 1

count = 0
for row in rectangle:
    for elem in row:
        if elem == 0:
            count += 1

print(count)