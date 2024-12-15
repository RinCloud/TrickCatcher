import sys

N, C = map(int, input().split())

sushi = []
for _ in range(N):
    x, v = map(int, input().split())
    sushi.append((x, v))

max_nutrition = 0
for i in range(N):
    total_nutrition = sushi[i][1]
    total_distance = 0
    for j in range(i + 1, N):
        total_distance += sushi[j][0] - sushi[j - 1][0]
        total_nutrition += sushi[j][1] - total_distance
        max_nutrition = max(max_nutrition, total_nutrition)

    total_distance = C - sushi[i][0]
    total_nutrition = sushi[i][1] - total_distance
    for j in range(i - 1, -1, -1):
        total_distance += sushi[j + 1][0] - sushi[j][0]
        total_nutrition += sushi[j][1] - total_distance
        max_nutrition = max(max_nutrition, total_nutrition)

print(max_nutrition)