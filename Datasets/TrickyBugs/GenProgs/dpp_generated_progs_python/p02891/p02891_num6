def minimum_operations(S, K):
    # Get the length of the string S
    length = len(S)
    
    # Calculate the number of adjacent character pairs in S
    pairs = sum(1 for a, b in zip(S, S[1:]) if a == b)
    
    # Calculate the number of adjacent character pairs in T
    total_pairs = pairs * K
    
    # Calculate the minimum number of operations required
    # If S has at least one adjacent character pair,
    # we need to change one character in each pair to make them different
    if pairs > 0:
        operations = (total_pairs // 2) + 1
    # If S doesn't have any adjacent character pairs,
    # we can change one character in each pair to make them different
    else:
        operations = total_pairs // 2
    
    return operations

# Read inputs from Standard Input
S = input().strip()
K = int(input().strip())

# Print the minimum number of operations required
print(minimum_operations(S, K))