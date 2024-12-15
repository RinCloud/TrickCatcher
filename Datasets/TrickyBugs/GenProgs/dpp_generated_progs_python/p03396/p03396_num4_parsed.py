# I will start by parsing the input
N, L = map(int, input().split())
x = list(map(int, input().split()))
t = list(map(int, input().split()))

# I will keep track of the time taken to reach each station
time = []

# The first time to reach a station is the time taken to reach it from the previous station
time.append(x[0])
for i in range(1, N):
    time.append(x[i] - x[i-1])

# I will keep track of the time taken to finish shopping at each station
shopping_time = []
for i in range(N):
    shopping_time.append(t[i] + time[i])

# The last time to reach a station is the time taken to reach it from the last shopping center
time.append(L - x[N-1])

# I will keep track of the total time taken
total_time = time[0]

# The total time is the sum of the time taken to reach each station and the maximum shopping time
for i in range(1, N+1):
    total_time += time[i] + max(0, shopping_time[i-1] - total_time)

# I will print the total time
print(total_time)