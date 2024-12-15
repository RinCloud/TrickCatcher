# Helper functions
def find_num_matches(p, n):
    """
    Returns the number of elements p_i such that p_i = i
    """
    num_matches = 0
    for i in range(n):
        if p[i] == i + 1:
            num_matches += 1
    return num_matches

def perform_operations(p, pairs):
    """
    Perform operations on permutation p using the given pairs
    and return the modified permutation.
    """
    for pair in pairs:
        x, y = pair
        p[x-1], p[y-1] = p[y-1], p[x-1]
    return p

# Read input
n, m = map(int, input().split())
p = list(map(int, input().split()))
pairs = [tuple(map(int, input().split())) for _ in range(m)]

# Perform operations and find the maximum number of matches
modified_p = perform_operations(p, pairs)
max_matches = find_num_matches(modified_p, n)

# Print the result
print(max_matches)