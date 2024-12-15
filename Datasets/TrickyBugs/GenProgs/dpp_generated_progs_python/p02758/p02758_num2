from collections import defaultdict

N = int(input())
robots = []
for _ in range(N):
    X, D = map(int, input().split())
    robots.append((X, D))

robots.sort() # Sort the robots by their positions

graph = defaultdict(list)
for i in range(N):
    X_i, D_i = robots[i]
    for j in range(i+1, N):
        X_j, D_j = robots[j]
        if X_i + D_i > X_j: # If robot i can activate robot j
            graph[i].append(j)

dp = [0] * N # dp[i] represents the number of possible sets of robots remaining on the number line after i operations

for i in range(N-1, -1, -1):
    dp[i] = 1 # Initialize the base case
    for j in graph[i]:
        dp[i] += dp[j] # Sum up the number of possible sets of robots remaining on the number line after activating robot j
    
ans = sum(dp) % 998244353 # Sum up the number of possible sets of robots remaining on the number line after all operations

print(ans)