def calculate_Scc_groups(N, M):
    Scc_groups = 0
    
    # calculate the maximum number of Scc groups
    while N > 0 and M > 0:
        if N > M:
            Scc_groups += M // 2
            N -= M // 2
            M -= M // 2
        else:
            Scc_groups += N
            M -= N
            N = 0
    
    return Scc_groups

# take inputs from the user
N, M = map(int, input().split())

# calculate the maximum number of Scc groups
max_Scc_groups = calculate_Scc_groups(N, M)

# print the result
print(max_Scc_groups)