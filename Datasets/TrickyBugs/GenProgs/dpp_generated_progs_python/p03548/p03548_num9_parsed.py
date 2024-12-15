import math

def max_people_seated(X, Y, Z):
    max_gap = Y + 2 * Z
    return math.floor((X - Z) / max_gap)

X, Y, Z = map(int, input().split())
print(max_people_seated(X, Y, Z))