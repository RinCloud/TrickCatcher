H, W, M = map(int, input().split())
targets = []
rows = {i: 0 for i in range(1, H + 1)}
cols = {i: 0 for i in range(1, W + 1)}

for _ in range(M):
    h, w = map(int, input().split())
    targets.append((h, w))
    rows[h] += 1
    cols[w] += 1

max_targets = max(rows.values()) + max(cols.values())

targets_count = sum(1 for h, w in targets if rows[h] + cols[w] == max_targets)

if targets_count == max_targets:
    print(max_targets)
else:
    print(max_targets - 1)