# get the number of houses
n = int(input())

# get the coordinates of the houses
houses = list(map(int, input().split()))

# sort the coordinates in ascending order
houses.sort()

# calculate the minimum distance
min_distance = houses[-1] - houses[0]

print(min_distance)