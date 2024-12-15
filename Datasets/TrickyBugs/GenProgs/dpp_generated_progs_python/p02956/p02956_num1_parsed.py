MOD = 998244353

# Read N and the coordinates of N points
N = int(input())
points = []
for _ in range(N):
    x, y = map(int, input().split())
    points.append((x, y))

# Sort the points in increasing order of their x-coordinates
points.sort()

# Calculate prefix and suffix sums of y-coordinates
prefix_sum = [0] * (N+1)
suffix_sum = [0] * (N+1)
for i in range(1, N+1):
    prefix_sum[i] = prefix_sum[i-1] + points[i-1][1]
for i in range(N-1, -1, -1):
    suffix_sum[i] = suffix_sum[i+1] + points[i][1]

# Calculate the answer
answer = 0
for i in range(N):
    x, y = points[i]
    size = (i+1) * (N-i) % MOD
    contribution = (size * y) % MOD
    contribution = (contribution * prefix_sum[i]) % MOD
    contribution = (contribution + (contribution * suffix_sum[i+1])) % MOD
    answer = (answer + contribution) % MOD

# Print the answer
print(answer)
