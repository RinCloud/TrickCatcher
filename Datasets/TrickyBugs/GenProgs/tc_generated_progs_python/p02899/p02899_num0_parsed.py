n = int(input())
a = list(map(int, input().split()))
result = [0] * n
for i in range(n):
  result[a[i]-1] = i+1
print(' '.join(str(x) for x in result))
