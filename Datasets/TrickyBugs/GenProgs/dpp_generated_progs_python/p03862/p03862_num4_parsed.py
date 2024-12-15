n, x = map(int, input().split())
a = list(map(int, input().split()))

operations = 0

for i in range(1, n):
    diff = a[i-1] + a[i] - x
    if diff > 0:
        operations += diff
        candies_to_eat = min(diff, a[i])
        a[i] -= candies_to_eat

print(operations)