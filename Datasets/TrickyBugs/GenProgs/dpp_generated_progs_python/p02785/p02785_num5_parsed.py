def minimum_attacks(N, K, H):
    # Sort the health values in decreasing order
    H.sort(reverse=True)
    
    # Calculate the total number of attacks needed
    total_attacks = sum(H) - K
    
    # If the total number of attacks needed is negative, return 0
    if total_attacks < 0:
        return 0
    
    # Calculate the minimum attacks needed without using special move
    min_attacks = total_attacks // (K + 1)
    
    # If there are any remaining monsters, add one more attack
    if total_attacks % (K + 1) > 0:
        min_attacks += 1
    
    return min_attacks

# Read the input from the standard input
N, K = map(int, input().split())
H = list(map(int, input().split()))

# Call the minimum_attacks function and print the result
print(minimum_attacks(N, K, H))