import math

X = int(input())

largest_power = 1

for b in range(1, int(math.sqrt(X)) + 1):
    for p in range(2, int(math.log(X, b)) + 1):
        if b**p <= X:
            largest_power = max(largest_power, b**p)

print(largest_power)