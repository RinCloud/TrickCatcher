def maximum_Scc_groups(N, M):
    # combine two `c`-shaped pieces into one `S`-shaped piece
    if N >= 1 and M >= 2:
        max_Scc_groups = min(N, M // 2)
    else:
        max_Scc_groups = 0
    
    return max_Scc_groups


# read input from standard input
N, M = map(int, input().split())

# calculate the maximum number of `Scc` groups
result = maximum_Scc_groups(N, M)

# print the result
print(result)