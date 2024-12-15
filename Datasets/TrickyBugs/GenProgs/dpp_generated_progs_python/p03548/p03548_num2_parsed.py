import math

def max_people(X, Y, Z):
    gap_size = Y + 2*Z
    return math.floor((X - Z) / gap_size)

X, Y, Z = map(int, input().split())
max_people_count = max_people(X, Y, Z)
print(max_people_count)