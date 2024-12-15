# Program:

N, X = map(int, input().split())
m = [int(input()) for _ in range(N)]

min_m = min(m)
total = sum(m)

max_doughnuts = N + (X - total) // min_m
print(max_doughnuts)