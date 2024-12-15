import math

def area_of_regular_dodecagon(r):
    return 3 * (r**2)

r = int(input())
area = area_of_regular_dodecagon(r)
print(area)