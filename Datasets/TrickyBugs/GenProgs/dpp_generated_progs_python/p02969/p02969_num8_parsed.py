import math

def calculate_dodecagon_area(r):
    area = 3 * math.pow(r, 2)
    return int(area)

r = int(input())
result = calculate_dodecagon_area(r)
print(result)