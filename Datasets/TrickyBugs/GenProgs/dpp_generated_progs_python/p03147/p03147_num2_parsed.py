N = int(input())
h = list(map(int, input().split()))

operations = 0

for i in range(1, N):
    diff = h[i] - h[i-1]
    if diff > 0:
        operations += diff

print(operations)