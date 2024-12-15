from bisect import bisect_left

N, C = map(int, input().split())
sushi = []
for _ in range(N):
    x, v = map(int, input().split())
    sushi.append((x, v))

# Rotate the sushi positions to make the counter circular
for i in range(1, N):
    sushi[i] = (sushi[i][0]-C, sushi[i][1])

# Calculate the prefix sum of nutrition values
prefix_sum = [0] * (N+1)
for i in range(N):
    prefix_sum[i+1] = prefix_sum[i] + sushi[i][1]

# Calculate the maximum nutrition value at each position
max_nutrition = [0] * (N+1)
for i in range(N):
    max_nutrition[i+1] = max(max_nutrition[i], prefix_sum[i+1] - sushi[i][0])

# Calculate the maximum nutrition value when starting from each position
ans = 0
for i in range(N):
    left_nutrition = prefix_sum[i+1] - sushi[i][0]
    right_nutrition = max_nutrition[N] - max_nutrition[i+1] - (prefix_sum[N] - prefix_sum[i+1])
    ans = max(ans, left_nutrition + right_nutrition)

print(ans)