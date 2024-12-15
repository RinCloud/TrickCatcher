# Getting the input
N = int(input())
d = list(map(int, input().split()))

# Initializing the sum of health points
sum_health_points = 0

# Computing the sum of the health points restored from eating two takoyaki
for i in range(N):
    for j in range(i+1, N):
        sum_health_points += d[i] * d[j]

# Printing the result
print(sum_health_points)