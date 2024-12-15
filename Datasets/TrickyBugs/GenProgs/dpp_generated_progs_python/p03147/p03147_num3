n = int(input())
h = list(map(int, input().split()))

operations = 0
for i in range(1, n):
    if h[i] < h[i-1]:
        operations += h[i-1] - h[i]

print(operations)