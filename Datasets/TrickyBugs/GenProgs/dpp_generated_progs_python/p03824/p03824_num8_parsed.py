from collections import defaultdict

# Function to calculate the uninity of a tree
def calculate_uninity(adj_list, curr_node, prev_node):
    max_uninity = 0
    
    for neighbor in adj_list[curr_node]:
        if neighbor != prev_node:
            curr_uninity = calculate_uninity(adj_list, neighbor, curr_node) + 1
            max_uninity = max(max_uninity, curr_uninity)
    
    return max_uninity

# Read input
N = int(input())
adj_list = defaultdict(list)

for _ in range(N-1):
    a, b = map(int, input().split())
    adj_list[a].append(b)
    adj_list[b].append(a)

# Calculate and print the minimum uninity
min_uninity = calculate_uninity(adj_list, 1, 0)
print(min_uninity)