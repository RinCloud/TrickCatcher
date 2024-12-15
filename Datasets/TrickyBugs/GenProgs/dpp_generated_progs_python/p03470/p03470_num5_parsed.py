n = int(input())
mochi_sizes = []
for _ in range(n):
  mochi_sizes.append(int(input()))
  
distinct_sizes = set(mochi_sizes)
layers = len(distinct_sizes)

print(layers)