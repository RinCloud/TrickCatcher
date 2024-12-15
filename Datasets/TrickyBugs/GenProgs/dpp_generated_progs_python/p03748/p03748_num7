from math import comb

def count_possible_sequences(N, M):
    MOD = 10**9 + 7
    total_bricks = 2 * M
    colors = N + 1  # Each brick can be either red or blue
    
    count = comb(total_bricks, M)  # Number of ways to choose M bricks out of 2M
    
    # Multiply the count by the number of possible color combinations for each position
    for i in range(1, M+1):
        count *= comb(total_bricks - i, 2)
        count %= MOD

    return count

# Get inputs
N, M = map(int, input().split())

# Print the count of possible sequences
print(count_possible_sequences(N, M))