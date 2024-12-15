N, X = map(int, input().split())
m = []
for _ in range(N):
  m.append(int(input()))
  
min_m = min(m)
total_m = sum(m)

remaining_m = X - total_m
max_doughnuts = (remaining_m // min_m) + N

print(max_doughnuts)