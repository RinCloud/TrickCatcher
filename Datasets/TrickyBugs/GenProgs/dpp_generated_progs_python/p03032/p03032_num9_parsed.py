# Program:

from collections import deque

def max_jewels_sum(N, K, jewels):
    max_sum = 0
    
    for A in range(min(K, N)+1):
        for B in range(min(K-A, N-A)+1):
            merged_jewels = jewels[:A] + jewels[N-B:]
            merged_jewels.sort(reverse=True)
            
            sum_jewels = sum(merged_jewels)
            neg_count = len([j for j in merged_jewels if j < 0])
            
            for C in range(min(K-(A+B), neg_count)+1):
                max_sum = max(max_sum, sum_jewels)
                neg_count -= C
                sum_jewels -= 2 * sum(merged_jewels[:C])
    
    return max_sum


N, K = map(int, input().split())
jewels = list(map(int, input().split()))

print(max_jewels_sum(N, K, jewels))