# get the number of observatories(N) and roads(M)
N, M = map(int, input().split())

# get the elevations of the observatories
elevations = list(map(int, input().split()))

# create a list to store the maximum elevation of observatories that can be reached from each observatory
max_elevations = [0] * N

# iterate through the roads and update the maximum elevation for each observatory
for i in range(M):
    A, B = map(int, input().split())
    max_elevations[A-1] = max(max_elevations[A-1], elevations[B-1])
    max_elevations[B-1] = max(max_elevations[B-1], elevations[A-1])

# count the number of good observatories
count = 0
for i in range(N):
    if elevations[i] >= max_elevations[i]:
        count += 1

# print the number of good observatories
print(count)