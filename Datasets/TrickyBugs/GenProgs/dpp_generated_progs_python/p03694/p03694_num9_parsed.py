n = int(input())
houses = list(map(int, input().split()))

# Sort the houses in ascending order
houses.sort()

# Calculate the distance between the first and last house
min_distance = houses[-1] - houses[0]

print(min_distance)