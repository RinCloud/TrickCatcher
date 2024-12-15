# Get N
N = int(input())

# Get the deliciousness of takoyaki
d = list(map(int, input().split()))

# Calculate the sum of health points restored from eating two takoyaki
total_health_points = 0
for i in range(N):
    for j in range(i+1, N):
        total_health_points += d[i] * d[j]

# Print the result
print(total_health_points)