n, x = map(int, input().split())
a = list(map(int, input().split()))

min_time = sum(a)

for i in range(1, n):
    time = i * x + sum(a[:i])
    min_time = min(min_time, time)

print(min_time)