N = int(input())
timetable = []
for _ in range(N-1):
    C, S, F = map(int, input().split())
    timetable.append((C, S, F))
for i in range(N):
    t = 0
    for j in range(i, N-1):
        C, S, F = timetable[j]
        if t < S:
            t = S
        elif t % F != 0:
            t = t + F - t % F
        t += C
    print(t)