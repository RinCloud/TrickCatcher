# Program to find the maximum number of 'Scc' groups that can be created

def find_max_scc_groups(N, M):
    # Ensure N is always greater or equal to M
    if N < M:
        N, M = M, N
    
    # Calculate the maximum number of 'Scc' groups
    max_groups = min(N, M // 2)
    
    return max_groups

# Read the input values
N, M = map(int, input().split())

# Find the maximum number of 'Scc' groups
max_groups = find_max_scc_groups(N, M)

# Print the result
print(max_groups)