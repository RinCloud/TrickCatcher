# Program

import sys

def min_sadness(N, A):
    min_sadness = sys.maxsize
    for b in range(-10**9, 10**9+1):
        sadness = 0
        for i in range(N):
            sadness += abs(A[i] - (b+i+1))
        min_sadness = min(min_sadness, sadness)
    return min_sadness


# Reading input
N = int(input())
A = list(map(int, input().split()))

# Getting the minimum sadness of Snuke
result = min_sadness(N, A)

# Printing the result
print(result)