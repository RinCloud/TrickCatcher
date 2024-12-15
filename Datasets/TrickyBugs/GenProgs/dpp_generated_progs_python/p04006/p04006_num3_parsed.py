import sys

N, X = map(int, input().split())
A = list(map(int, input().split()))

total_time = sum(A)
min_time = total_time

for i in range(1, N):
    total_time += A[i-1]
    min_time = min(min_time, total_time + (i * X))

print(min_time)