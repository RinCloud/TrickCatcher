def additional_chairs(N, M, chairs):
    max_left = 0
    min_right = M + 1
    additional = 0
    
    for l, r in chairs:
        max_left = max(max_left, l)
        min_right = min(min_right, r)
    
    additional = max(0, min_right - max_left)
    return additional

# Read input
N, M = map(int, input().split())
chairs = []
for _ in range(N):
    l, r = map(int, input().split())
    chairs.append((l, r))

# Calculate and print the minimum required number of additional chairs
print(additional_chairs(N, M, chairs))