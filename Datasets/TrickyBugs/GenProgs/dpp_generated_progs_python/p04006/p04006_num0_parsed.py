import sys

def min_time_to_have_slimes(n, x, a):
    if n == 1:
        return 0

    min_time = float('inf')

    for i in range(n):
        time = i * x
        for j in range(n):
            time += a[j]
            if j <= i:
                time += x * (i - j)
            else:
                time += x * (n - j + i)
        min_time = min(min_time, time)

    return min_time

n, x = map(int, sys.stdin.readline().split())
a = list(map(int, sys.stdin.readline().split()))

print(min_time_to_have_slimes(n, x, a))