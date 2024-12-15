'''
# First, we need to create a list to store the elevation of each observatory.

elevations = []

# Next, we need to take the input for the number of observatories, N, and the number of roads, M.

N, M = map(int, input().split())

# Then, we need to take input for the elevations of each observatory.

elevations = list(map(int, input().split()))

# We also need to create a list of sets to store the connected observatories.

connected = [set() for _ in range(N)]

# Next, we need to take input for the roads and update the connected list accordingly.

for _ in range(M):
    A, B = map(int, input().split())
    connected[A-1].add(B-1)
    connected[B-1].add(A-1)

# Finally, we can determine the number of good observatories by comparing each observatory's elevation with the maximum elevation among its connected observatories.

good_count = 0

for i in range(N):
    max_elevation = max([elevations[j] for j in connected[i]] + [elevations[i]])
    if elevations[i] > max_elevation:
        good_count += 1

# Output the result.

print(good_count)
'''