from collections import defaultdict

N = int(input())
dots = []
for _ in range(N):
    x, y = map(int, input().split())
    dots.append((x, y))

x_count = defaultdict(int)
y_count = defaultdict(int)
for x, y in dots:
    x_count[x] += 1
    y_count[y] += 1

result = 0
for x, y in dots:
    count = x_count[x] + y_count[y] - 1
    result = max(result, count)

print(result)