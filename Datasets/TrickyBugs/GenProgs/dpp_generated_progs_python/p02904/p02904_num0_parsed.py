'''
We can solve this problem by counting the number of inversions in the given permutation.
An inversion is a pair of numbers (i,j) such that i < j and P_i > P_j.

To find the number of permutations that can be produced after the operation, we need to count the number of inversions in each subarray of size K.

Here is the Python program to solve this problem:
'''

def count_inversions(arr):
    count = 0
    n = len(arr)
    for i in range(n):
        for j in range(i+1, n):
            if arr[i] > arr[j]:
                count += 1
    return count

def count_permutations(N, K, P):
    num_permutations = 0
    for i in range(N-K+1):
        subarray = P[i:i+K]
        inversions = count_inversions(subarray)
        if inversions == K*(K-1)//2:
            num_permutations += 1
    return num_permutations

# Reading input
N, K = map(int, input().split())
P = list(map(int, input().split()))

# Counting the number of permutations
result = count_permutations(N, K, P)

# Printing the result
print(result)