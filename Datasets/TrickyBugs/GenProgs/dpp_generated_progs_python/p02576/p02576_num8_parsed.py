n, x, t = map(int, input().split())
min_time = (n // x) * t
if n % x != 0:
    min_time += t
print(min_time)