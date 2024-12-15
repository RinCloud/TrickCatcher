def max_travel_distance(n, x, cities):
    max_distance = 0
    for city in cities:
        distance = abs(x - city)
        max_distance = max(max_distance, distance)
    return max_distance

n, x = map(int, input().split())
cities = list(map(int, input().split()))

result = max_travel_distance(n, x, cities)
print(result)