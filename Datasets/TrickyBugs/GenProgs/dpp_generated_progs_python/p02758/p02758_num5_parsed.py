# Program:

N = int(input())
robots = []
for _ in range(N):
    X, D = map(int, input().split())
    robots.append((X, D))

robots.sort(reverse=True)  # Sort robots in descending order of their positions

count = 0
dp = [1] * (N+1)  # dp[i] stores the number of possible sets of robots remaining after taking i operations

for i in range(N):
    X, D = robots[i]

    # Find the index of the next robot that can be activated
    j = i + 1
    while j < N and robots[j][0] <= X + D:
        j += 1
    
    # Number of possible sets of robots remaining after taking i+1 operations
    dp[i+1] = (2 * dp[i] - dp[j]) % 998244353

    count += dp[i]  # Add the count of possible sets after i operations to the total count

print(count % 998244353)