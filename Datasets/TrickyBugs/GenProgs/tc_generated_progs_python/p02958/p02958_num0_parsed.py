n = int(input())
a = list(map(int, input().split()))

indices = []
for i in range(n):
  if a[i] != i+1:
    indices.append(i)

if len(indices) == 0 or len(indices) == 2 and a[indices[0]] == indices[1]+1 and a[indices[1]] == indices[0]+1:
  print('YES')
else:
  print('NO')
