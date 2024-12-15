H, W, M = map(int, input().split())
targets = []
for _ in range(M):
    h, w = map(int, input().split())
    targets.append((h, w))

row_max = [0] * H
col_max = [0] * W
for h, w in targets:
    row_max[h-1] += 1
    col_max[w-1] += 1

max_targets = max(row_max) + max(col_max)

result = max_targets
for h, w in targets:
    if row_max[h-1] + col_max[w-1] == max_targets:
        result -= 1

print(result)