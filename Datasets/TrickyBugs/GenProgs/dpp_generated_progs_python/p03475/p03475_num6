from math import ceil

N = int(input())
trains = []
for _ in range(N-1):
    C, S, F = map(int, input().split())
    trains.append((C, S, F))

times = []
for i in range(N):
    t = 0
    for j in range(i, N-1):
        C, S, F = trains[j]
        if t < S:
            t = S
        else:
            t = ((t - S) // F + 1) * F + S
        t += C
    times.append(t)

for t in times:
    print(t)