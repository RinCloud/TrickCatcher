def find_earliest_time(N, trains):
    arrival_times = [0] * N
    for i in range(N-1, -1, -1):
        t = 0
        for j in range(i+1, N):
            wait_time = (arrival_times[j] - t + trains[j][2] - 1) // trains[j][2]
            t = arrival_times[j] + trains[j][0] + wait_time * trains[j][1]
        arrival_times[i] = t
    return arrival_times

N = int(input())
trains = []
for _ in range(N-1):
    trains.append(list(map(int, input().split())))

result = find_earliest_time(N, trains)
for time in result:
    print(time)