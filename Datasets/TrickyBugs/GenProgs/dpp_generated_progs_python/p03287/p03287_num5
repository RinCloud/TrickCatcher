def count_pairs(N, M, candies):
    # Prefix sum array
    prefix = [0] * (N + 1)
    for i in range(1, N + 1):
        prefix[i] = prefix[i - 1] + candies[i - 1]
    
    # Frequency of modular remainders
    freq = [0] * M
    for i in range(N + 1):
        freq[prefix[i] % M] += 1
    
    # Count of pairs
    count = 0
    for i in range(M):
        count += freq[i] * (freq[i] - 1) // 2
    
    return count

# Read input
N, M = map(int, input().split())
candies = list(map(int, input().split()))

# Calculate and print result
print(count_pairs(N, M, candies))