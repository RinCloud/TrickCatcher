# getting inputs

W, H, N = map(int, input().split())
points = []
for _ in range(N):
    x, y, a = map(int, input().split())
    points.append((x, y, a))
    
# marking the painted regions

painted = [[0] * W for _ in range(H)]
for x, y, a in points:
    if a == 1:
        for i in range(x):
            for j in range(H):
                painted[j][i] = 1
    elif a == 2:
        for i in range(x + 1, W):
            for j in range(H):
                painted[j][i] = 1
    elif a == 3:
        for i in range(W):
            for j in range(y):
                painted[j][i] = 1
    elif a == 4:
        for i in range(W):
            for j in range(y + 1, H):
                painted[j][i] = 1
                
# counting the white region

white_count = sum(row.count(0) for row in painted)
print(white_count)