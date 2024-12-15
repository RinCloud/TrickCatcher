n = int(input())
a = list(map(int, input().split()))
result = []

for i in range(n):
    result.insert(a[i]-1, i+1)

print(*result)
