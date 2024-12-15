'''
Algorithm:

1. Sort the given sequence in non-decreasing order.
2. Initialize the minimum difference variable (min_diff) as infinity.
3. Iterate over each possible starting position for the subsequence, i.e. from index i=0 to index i=N-K.
   * Select the subsequence of length K starting at index i.
   * Remove the smallest element from the subsequence.
   * Calculate the difference between the largest and smallest element of the subsequence.
   * Update the minimum difference variable if the calculated difference is smaller.
4. Print the minimum difference variable.

Time Complexity Analysis:

Sorting the sequence: O(N log N)
Iterating over each subsequence: O(N-K)
Calculating the difference: O(K)
Overall Time Complexity: O((N-K) * K * log N), which is approximately O(N*K*log N)

'''
from heapq import *

N, K, Q = map(int, input().split())
A = list(map(int, input().split()))

min_diff = float('inf')

A.sort()

for i in range(N-K+1):
    subseq = A[i:i+K]
    heapify(subseq)
    
    for j in range(Q):
        smallest = heappop(subseq)
        diff = subseq[-1] - smallest
        min_diff = min(min_diff, diff)
        
        if not subseq:
            break

print(min_diff)