def find_earliest_times(N, trains):
    times = [0] * N
    for i in range(N-1):
        for j in range(i, N-1):
            if times[j] < trains[j][1]:
                times[j] = trains[j][1]
            elif times[j] % trains[j][2] != 0:
                times[j] += trains[j][2] - (times[j] % trains[j][2])
            times[j] += trains[j][0]
    return times

N = int(input())
trains = [list(map(int, input().split())) for _ in range(N-1)]

result = find_earliest_times(N, trains)
for time in result:
    print(time)