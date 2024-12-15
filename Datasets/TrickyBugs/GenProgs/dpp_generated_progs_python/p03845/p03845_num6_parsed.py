n = int(input())
t = list(map(int, input().split()))
m = int(input())

for _ in range(m):
    p, x = map(int, input().split())
    total_time = sum(t)
    total_time -= t[p-1]
    total_time += x
    print(total_time)