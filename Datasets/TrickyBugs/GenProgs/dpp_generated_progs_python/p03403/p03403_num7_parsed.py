# PROGRAM

N = int(input())
spots = list(map(int, input().split()))
total_cost = sum([abs(spots[i] - spots[i-1]) for i in range(1, N+1)])

for i in range(N):
    if i == 0:
        cost = abs(spots[i] - spots[i+1])
    elif i == N-1:
        cost = abs(spots[i] - spots[i-1])
    else:
        cost = abs(spots[i] - spots[i-1]) + abs(spots[i] - spots[i+1])
    print(total_cost - cost)