from collections import deque

def is_possible(N, V, x):
    # Calculate difference between consecutive oases
    dx = []
    for i in range(N-1):
        dx.append(x[i+1] - x[i])
    
    # Initialize a dp array
    dp = [[0] * N for _ in range(2)]
    dp[0][0] = V
    dp[1][0] = V

    for i in range(N-1):
        dp[0][i+1] = max(0, dp[0][i] - dx[i])
        dp[1][i+1] = max(0, dp[0][i] - dx[i]) + V

    # Check if it is possible to reach each oasis
    possible = ['Possible'] * N
    q = deque()
    q.append(N-1)
    while q:
        i = q.popleft()
        if possible[i] == 'Impossible':
            continue
        if i > 0 and dp[1][i-1] >= dx[i-1]:
            if possible[i-1] == 'Possible':
                q.append(i-1)
            dp[1][i-1] -= dx[i-1]
        if dp[1][i] >= dx[i]:
            if possible[i] == 'Possible':
                q.append(i-1)
            dp[1][i] -= dx[i]
        if dp[0][i] >= dx[i]:
            if possible[i] == 'Possible':
                q.append(i-1)
            dp[0][i] -= dx[i]
        possible[i] = 'Impossible'

    return possible

# Read input
N, V = map(int, input().split())
x = list(map(int, input().split()))

# Check if it is possible to visit each oasis
result = is_possible(N, V, x)

# Print the result
for res in result:
    print(res)