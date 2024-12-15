def count_permutations(N, K, P):
    count = 0
    
    # Check all possible starting positions for the consecutive elements
    for i in range(N - K + 1):
        # Sort the consecutive elements
        sorted_elements = sorted(P[i:i+K])
        
        # Check if sorting the consecutive elements results in the same permutation or not
        if P[:i] + sorted_elements + P[i+K:] == sorted(P):
            count += 1
    
    return count


# Read the input values
N, K = map(int, input().split())
P = list(map(int, input().split()))

# Calculate and print the number of permutations
print(count_permutations(N, K, P))