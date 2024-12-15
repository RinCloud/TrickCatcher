import math

N, K = map(int, input().split())

min_difference = 0
if N >= K:
    min_difference = N % K
else:
    min_difference = min(K-N, N)

print(min_difference)
