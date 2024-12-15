# Program

H, W, M = map(int, input().split())
targets = []
row_count = [0] * H
col_count = [0] * W

for _ in range(M):
    h, w = map(int, input().split())
    targets.append((h, w))
    row_count[h-1] += 1
    col_count[w-1] += 1

max_targets = max(row_count) + max(col_count)

max_count_rows = sum(1 for i in row_count if i == max(row_count))
max_count_cols = sum(1 for i in col_count if i == max(col_count))
        
for h, w in targets:
    if row_count[h-1] == max(row_count) and col_count[w-1] == max(col_count):
        max_targets -= 1
        
if max_count_rows * max_count_cols > max_targets:
    max_targets = max_count_rows * max_count_cols
        
print(max_targets)