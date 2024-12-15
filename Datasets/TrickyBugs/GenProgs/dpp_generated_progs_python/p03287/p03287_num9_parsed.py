import collections

def count_pairs(N, M, A):
    prefix_sum = [0] * (N+1)
    for i in range(1, N+1):
        prefix_sum[i] = prefix_sum[i-1] + A[i-1]

    counter = collections.Counter()
    for i in range(N+1):
        counter[prefix_sum[i] % M] += 1
    
    result = 0
    for count in counter.values():
        result += count * (count - 1) // 2
    
    return result

# Read input
N, M = map(int, input().split())
A = list(map(int, input().split()))

# Call the function and print the result
print(count_pairs(N, M, A))