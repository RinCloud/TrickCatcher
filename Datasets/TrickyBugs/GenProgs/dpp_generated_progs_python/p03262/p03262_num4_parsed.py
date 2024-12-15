# Taking input
n, x = map(int, input().split())
cities = list(map(int, input().split()))

# Find the maximum distance between consecutive cities
distances = [abs(c-x) for c in cities]
max_distance = max(distances)

# Outputting the maximum distance
print(max_distance)