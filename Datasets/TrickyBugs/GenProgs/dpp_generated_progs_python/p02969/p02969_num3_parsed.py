import math

def area_of_dodecagon(r):
    a = r / math.sqrt(3)
    area = 3 * a**2
    return int(area)

r = int(input())
print(area_of_dodecagon(r))