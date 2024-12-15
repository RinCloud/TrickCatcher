# Program

N, X = map(int, input().split())
m = []
for _ in range(N):
    m.append(int(input()))

min_m = min(m)
remaining_X = X - min_m * N
max_doughnuts = min_m * N

max_doughnuts += remaining_X // min_m
print(max_doughnuts)