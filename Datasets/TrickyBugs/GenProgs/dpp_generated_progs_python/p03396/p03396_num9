N, L = map(int, input().split())
x = list(map(int, input().split()))
t = list(map(int, input().split()))

total_time = sum(t)
min_time = max(abs(L - x[0]), x[-1])

for i in range(N-1):
    min_time = max(min_time, abs(x[i+1] - x[i]))

min_time = max(min_time, L - min_time)

if min_time >= total_time:
    print(min_time + total_time)
else:
    print(total_time)