N, K, Q = map(int, input().split())
A = list(map(int, input().split()))

A.sort()
min_difference = float('inf')

for i in range(N - K + 1):
    subsequence = A[i:i + K]
    difference = max(subsequence) - min(subsequence)
    min_difference = min(min_difference, difference)

print(min_difference)
