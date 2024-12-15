H, W, N = map(int, input().split())
cells = [[0] * W for _ in range(H)]
for _ in range(N):
    a, b = map(int, input().split())
    cells[a-1][b-1] = 1

count = [0] * 10
for i in range(H - 2):
    for j in range(W - 2):
        black_cells = 0
        for k in range(i, i + 3):
            for l in range(j, j + 3):
                black_cells += cells[k][l]
        count[black_cells] += 1

for c in count:
    print(c)