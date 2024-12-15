def minimum_bricks_to_break(N, bricks):
    desired_values = set(range(1, N+1))
    bricks_set = set(bricks)
    
    # If the set of desired values is not a subset of the bricks set, it's unsatisfiable.
    if not desired_values.issubset(bricks_set):
        return -1
    
    # Count the number of bricks that need to be broken.
    count = 0
    for i in range(N):
        if bricks[i] != i+1:
            count += 1
    
    return count


# Read input
N = int(input())
bricks = list(map(int, input().split()))

# Calculate and print the minimum number of bricks to break
result = minimum_bricks_to_break(N, bricks)
print(result)
