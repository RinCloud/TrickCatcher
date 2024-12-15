# Program

import itertools

def count_subsequences(n, k, a):
    count = 0
    for i in range(1, n+1):
        for j in range(i, n+1):
            subsequence = a[i-1:j]
            if sum(subsequence) / len(subsequence) >= k:
                count += 1
    return count

# Reading input
n, k = map(int, input().split())
a = [int(input()) for _ in range(n)]

# Counting subsequences
result = count_subsequences(n, k, a)

# Printing result
print(result)