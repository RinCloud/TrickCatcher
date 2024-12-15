from collections import defaultdict

MOD = 998244353

def dfs(i, adj, visited):
    visited[i] = True
    count = 1
    for j in adj[i]:
        if not visited[j]:
            count += dfs(j, adj, visited)
    return count

def solve(N, robots):
    X = []
    D = []
    for i in range(N):
        X.append(robots[i][0])
        D.append(robots[i][1])
        
    events = []
    for i in range(N):
        events.append((X[i], i))
        events.append((X[i]+D[i], i))

    events.sort()
    
    adj = defaultdict(list)
    for i in range(N):
        adj[i] = []
        
    stack = []
    occupied = set()
    
    for event in events:
        x = event[0]
        robot_idx = event[1]
        d = D[robot_idx]
        
        if x in occupied:
            if stack and stack[-1] != x:
                adj[stack[-1]].append(stack[-2])
                adj[stack[-2]].append(stack[-1])
            stack.append(x+d)
        else:
            if stack and stack[-1] == x:
                stack.pop()
            occupied.add(x)
        
    visited = [False] * N
    result = 1
    for i in range(N):
        if not visited[i]:
            count = dfs(i, adj, visited)
            result = (result * (count+1)) % MOD
    
    return result

# Reading inputs
N = int(input())
robots = []
for _ in range(N):
    x, d = map(int, input().split())
    robots.append((x, d))

# Solve the problem
result = solve(N, robots)

# Print the result
print(result)