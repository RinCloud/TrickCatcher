import math
def closest_integer(value):
    return math.floor(float(value)) if float(value) - math.floor(float(value)) < 0.5 else math.ceil(float(value))