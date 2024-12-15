from collections import defaultdict

def maximize_targets(H, W, M, targets):
    # Create a dictionary to store the count of targets in each row and column
    target_count = defaultdict(int)
    
    # Iterate through each target and increment the count in the respective row and column
    for h, w in targets:
        target_count[h] += 1
        target_count[W + w] += 1
    
    max_targets = 0
    
    # Find the maximum count of targets in either a row or a column
    for count in target_count.values():
        max_targets = max(max_targets, count)
    
    return max_targets


# Read input from Standard Input
H, W, M = map(int, input().split())
targets = [tuple(map(int, input().split())) for _ in range(M)]

# Calculate and print the maximum number of targets that can be destroyed
print(maximize_targets(H, W, M, targets))