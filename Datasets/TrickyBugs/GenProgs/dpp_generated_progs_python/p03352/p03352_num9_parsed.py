from math import isqrt

X = int(input())
largest_power = 0

for b in range(1, X+1):
    for p in range(2, isqrt(X)+1):
        power = b ** p
        if power > X:
            break
        largest_power = max(largest_power, power)

print(largest_power)