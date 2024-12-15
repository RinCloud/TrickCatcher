def minimum_time(N, E, T, x):
    time = 0
    for i in range(N):
        distance = abs(x[i] - x[i-1])
        time += distance + T
    time += E
    return time

N, E, T = map(int, input().split())
x = list(map(int, input().split()))

result = minimum_time(N, E, T, x)
print(result)