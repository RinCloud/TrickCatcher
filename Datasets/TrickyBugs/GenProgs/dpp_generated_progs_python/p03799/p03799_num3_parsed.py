def maximum_Scc_groups(N, M):
    # Find the minimum of N, M/2, and (N + M)/3
    return min(N, M // 2, (N + M) // 3)

N, M = map(int, input().split())
print(maximum_Scc_groups(N, M))
