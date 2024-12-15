import sys

def find_max_groups(n, m):
    # Check if there are enough pieces to form at least one group
    if n == 0 or m < 2:
        return 0
    
    # Calculate the maximum number of groups that can be formed
    max_groups = min(n, m // 2)
    
    return max_groups

# Read input from standard input
input_str = sys.stdin.read().strip()
n, m = map(int, input_str.split())

# Calculate the maximum number of groups
result = find_max_groups(n, m)

# Print the result
print(result)