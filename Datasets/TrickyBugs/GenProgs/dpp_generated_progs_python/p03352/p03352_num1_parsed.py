import math

X = int(input())

largest_power = 1

for b in range(2, int(math.sqrt(X)) + 1):
    for p in range(2, int(math.log(X, b)) + 1):
        power = b ** p
        if power <= X and power > largest_power:
            largest_power = power

print(largest_power)