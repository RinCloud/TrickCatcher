import math

X = int(input())

largest_perfect_power = 1

for b in range(1, int(math.sqrt(X))+1):
    for p in range(2, int(math.log2(X))+1):
        power = b**p
        if power <= X:
            largest_perfect_power = max(largest_perfect_power, power)
        else:
            break

print(largest_perfect_power)