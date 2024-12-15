from heapq import heappush, heappop

def solve(N, M, ab, xy):
    adj = [[] for _ in range(N+1)]
    for x, y in xy:
        adj[x].append(y)
        adj[y].append(x)

    # dist[i] := smallest initial amount of money to win if currently at vertex i
    dist = [float('inf')] * (N+1)
    dist[1] = ab[1][0]

    # Priority queue to visit vertices in the order of smallest initial amount of money
    pq = [(dist[1], 1)]
    while pq:
        w, v = heappop(pq)
        if w > dist[v]:
            continue
        for nv in adj[v]:
            # Calculate the amount of money we need to move to nv
            required_money = max(w, ab[nv][0])

            # Calculate the amount of money we will have if we donate to nv
            remaining_money = w - ab[nv][1]

            # If we can win from nv with required_money,
            # and nv is not already visited or has a smaller dist[nv],
            # update dist[nv]
            if required_money >= ab[nv][0] and remaining_money >= 0 and required_money < dist[nv]:
                dist[nv] = required_money
                heappush(pq, (required_money, nv))

    return dist[N]

# Read input
N, M = map(int, input().split())
ab = [[0, 0]] + [list(map(int, input().split())) for _ in range(N)]
xy = [list(map(int, input().split())) for _ in range(M)]

# Solve the problem
result = solve(N, M, ab, xy)

# Output the result
print(result)