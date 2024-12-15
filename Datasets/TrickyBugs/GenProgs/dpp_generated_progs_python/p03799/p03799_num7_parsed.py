import sys

def maximum_Scc_groups(N, M):
    # Check if there are enough pieces to form at least one Scc group
    if N < 1 or M < 2:
        return 0
    
    # Calculate the maximum number of Scc groups that can be formed
    max_groups = min(N, M // 2)
    
    return max_groups

# Read the input from Standard Input
input_line = sys.stdin.readline().strip()

# Split the input line into N and M
N, M = map(int, input_line.split())

# Calculate and print the maximum number of Scc groups
print(maximum_Scc_groups(N, M))