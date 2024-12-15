import sys
sys.setrecursionlimit(10**6)

H, W = map(int, input().split())
S = [list(input()) for _ in range(H)]

black_row_count = [0] * H
black_col_count = [0] * W

for i in range(H):
    for j in range(W):
        if S[i][j] == '#':
            black_row_count[i] += 1
            black_col_count[j] += 1

max_area = 0
for i in range(H):
    for j in range(W):
        area = black_row_count[i] + black_col_count[j]
        if S[i][j] == '#':
            area -= 1
        max_area = max(max_area, area)

print(max_area)