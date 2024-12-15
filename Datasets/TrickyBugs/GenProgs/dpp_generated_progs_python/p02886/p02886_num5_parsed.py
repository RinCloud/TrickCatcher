N = int(input())
d = list(map(int, input().split()))

health_points_sum = 0
for i in range(N):
    for j in range(i+1, N):
        health_points_sum += d[i] * d[j]

print(health_points_sum)