def find_nearest_integer(X, N, seq):
    min_diff = float('inf')
    nearest_int = None

    for i in range(1, X+1):
        if i not in seq:
            diff = abs(X - i)
            if diff < min_diff:
                min_diff = diff
                nearest_int = i

    return nearest_int

# Read input values
X, N = map(int, input().split())
seq = list(map(int, input().split()))

# Find and print the nearest integer
nearest_int = find_nearest_integer(X, N, seq)
print(nearest_int)