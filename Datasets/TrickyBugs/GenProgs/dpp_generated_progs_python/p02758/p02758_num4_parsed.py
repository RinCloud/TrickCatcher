N = int(input())
robots = []
for _ in range(N):
    X, D = map(int, input().split())
    robots.append((X, D))

robots.sort(key=lambda x: x[0])  # Sort the robots by their coordinate X

dp = [0] * (N+1)  # Dynamic programming array to store the count of possible sets
dp[N] = 1  # Initially, there is only one possible set with all robots remaining

for i in range(N-1, -1, -1):
    X_i, D_i = robots[i]

    # Find the index of the first robot that lies outside the range [X_i, X_i + D_i)
    j = i+1
    while j < N and robots[j][0] < X_i + D_i:
        j += 1

    # Calculate the count of possible sets after activating Robot i
    dp[i] = (dp[i+1] + dp[j]) % 998244353

print(dp[0])