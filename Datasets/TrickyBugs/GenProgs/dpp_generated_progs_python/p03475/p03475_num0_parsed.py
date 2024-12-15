import sys

def earliest_arrival_time(N, trains):
    arrival_time = [0] * N

    for i in range(N-1, -1, -1):
        for j in range(i+1, N):
            wait_time = arrival_time[j] - trains[j][0]
            if wait_time < 0:
                wait_time = 0
            arrival_time[i] = trains[i][1] + trains[i][2] * ((wait_time + trains[i][2] - 1) // trains[i][2])

    return arrival_time

N = int(sys.stdin.readline().strip())
trains = []
for _ in range(N-1):
    C, S, F = map(int, sys.stdin.readline().split())
    trains.append((C, S, F))

result = earliest_arrival_time(N, trains)

for time in result:
    print(time)