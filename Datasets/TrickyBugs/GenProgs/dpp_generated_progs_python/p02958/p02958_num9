def can_sort_sequence(N, p):
    # Check if the sequence is already sorted
    if sorted(p) == p:
        return "YES"
    
    # Find the indices of the minimum and maximum values
    min_idx = p.index(min(p))
    max_idx = p.index(max(p))
    
    # Check if the sequence can be sorted by swapping
    if min_idx < max_idx:
        # Swap the minimum and maximum values
        p[min_idx], p[max_idx] = p[max_idx], p[min_idx]
        
        # Check if the sequence is now sorted
        if sorted(p) == p:
            return "YES"
    
    return "NO"

# Read input
N = int(input())
p = list(map(int, input().split()))

# Call the function and print the result
print(can_sort_sequence(N, p))