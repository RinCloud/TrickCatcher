# Reading the input
N, X = map(int, input().split())
cities = list(map(int, input().split()))

# Finding the absolute difference between the starting city and all other cities
distances = [abs(X - c) for c in cities]

# Finding the greatest common divisor (gcd) of the distances
d = distances[0]
for i in range(1, N):
    d = gcd(d, distances[i])

# Printing the maximum value of D
print(d)