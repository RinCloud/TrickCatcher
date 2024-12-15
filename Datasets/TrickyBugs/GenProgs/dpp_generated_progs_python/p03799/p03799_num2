# Program

n, m = map(int, input().split())

# Every 'Scc' group requires 1 'S' and 2 'c' pieces.
# So, the maximum number of 'Scc' groups that can be created is the minimum of N/1, M/2, and (N+M)/3
max_groups = min(n, m // 2, (n + m) // 3)

print(max_groups)