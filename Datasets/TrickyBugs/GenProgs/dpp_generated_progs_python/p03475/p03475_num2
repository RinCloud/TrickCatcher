N = int(input())

trains = []
for _ in range(N-1):
    C, S, F = map(int, input().split())
    trains.append((C, S, F))

times = [0]*N
for i in range(N-1):
    for j in range(i, N-1):
        C, S, F = trains[j]
        if times[j] < S:
            times[j] = S
        elif times[j] % F == 0:
            pass
        else:
            times[j] += F - (times[j] % F)
        times[j] += C

for t in times:
    print(t)
