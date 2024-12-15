N = int(input())
d = list(map(int, input().split()))

total_health_points = 0

for i in range(N):
    for j in range(i+1, N):
        health_points = d[i] * d[j]
        total_health_points += health_points

print(total_health_points)