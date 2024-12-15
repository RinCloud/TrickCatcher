import sys

MOD = 998244353

def main():
    # Read input
    N = int(input())
    M1 = int(input())
    e1 = [list(map(int, input().split())) for _ in range(M1)]
    M2 = int(input())
    e2 = [list(map(int, input().split())) for _ in range(M2)]
    M3 = int(input())
    e3 = [list(map(int, input().split())) for _ in range(M3)]

    # Create adjacency lists for X, Y, and Z graphs
    adj_x = [[] for _ in range(N + 1)]
    adj_y = [[] for _ in range(N + 1)]
    adj_z = [[] for _ in range(N + 1)]
    for u, v in e1:
        adj_x[u].append(v)
        adj_x[v].append(u)
    for u, v in e2:
        adj_y[u].append(v)
        adj_y[v].append(u)
    for u, v in e3:
        adj_z[u].append(v)
        adj_z[v].append(u)

    # Calculate the maximum possible total weight of an independent set in W
    dp = [[0] * (N + 1) for _ in range(N + 1)]
    for x in range(1, N + 1):
        for y in range(1, N + 1):
            dp[x][y] = pow(10, 18 * (x + y), MOD)
    for z in range(1, N + 1):
        for x in range(1, N + 1):
            for y in range(1, N + 1):
                if x in adj_x[z] or y in adj_y[z]:
                    dp[x][y] = 0
    total_weight = 0
    for x in range(1, N + 1):
        for y in range(1, N + 1):
            total_weight += dp[x][y]
            total_weight %= MOD

    print(total_weight)

if __name__ == "__main__":
    main()