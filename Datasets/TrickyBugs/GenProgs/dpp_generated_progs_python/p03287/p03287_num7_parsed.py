import itertools

def count_pairs(N, M, A):
    count = 0
    
    prefix_sum = [0] * (N+1)
    for i in range(1, N+1):
        prefix_sum[i] = prefix_sum[i-1] + A[i-1]
    
    freq = [0] * M
    for i in range(1, N+1):
        mod = prefix_sum[i] % M
        freq[mod] += 1

    for i in range(M):
        count += freq[i] * (freq[i] - 1) // 2

    return count

# Read input
N, M = map(int, input().split())
A = list(map(int, input().split()))

# Calculate and print output
print(count_pairs(N, M, A))