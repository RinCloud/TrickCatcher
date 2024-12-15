# Plan:
1. Read the input values of N, M, and the elevation values of observatories into variables.
2. Create an empty dictionary called `reachable_obs` to store the observatories that can be reached from each observatory using just one road.
3. Iterate through the roads and update the `reachable_obs` dictionary accordingly.
4. Initialize the count of good observatories as N.
5. Iterate through each observatory and check if it is good by comparing its elevation with the maximum elevation of observatories that can be reached from it.
6. If an observatory is not good, decrement the count of good observatories.
7. Print the count of good observatories as the output.

# The final program:

N, M = map(int, input().split())
elevations = list(map(int, input().split()))

reachable_obs = {i: [] for i in range(1, N+1)}
for _ in range(M):
    A, B = map(int, input().split())
    reachable_obs[A].append(elevations[B-1])
    reachable_obs[B].append(elevations[A-1])

count_good_obs = N
for observatory in range(1, N+1):
    if len(reachable_obs[observatory]) > 0:
        max_elevation = max(reachable_obs[observatory])
        if elevations[observatory-1] <= max_elevation:
            count_good_obs -= 1

print(count_good_obs)