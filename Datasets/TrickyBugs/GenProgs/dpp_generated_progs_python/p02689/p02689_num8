# The plan to solve the problem is as follows:
# - First, we initialize a list called "elevations" to store the elevation of each observatory.
# - We initialize a set called "good_obs" to store the indices of good observatories.
# - Next, we iterate through the roads and compare the elevation of the connected observatories.
# - If the elevation of the current observatory is less than the connected observatory, we remove it from the set of good observatories.
# - Finally, we print the length of the set "good_obs" to get the number of good observatories.

N, M = map(int, input().split())
elevations = list(map(int, input().split()))

good_obs = set(range(N))

for _ in range(M):
    A, B = map(int, input().split())
    
    if elevations[A-1] <= elevations[B-1]:
        good_obs.discard(A-1)
    if elevations[B-1] <= elevations[A-1]:
        good_obs.discard(B-1)

print(len(good_obs))