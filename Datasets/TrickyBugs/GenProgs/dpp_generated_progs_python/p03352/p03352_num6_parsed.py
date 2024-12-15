import math

def largest_perfect_power(X):
    largest_power = 1
    for b in range(1, int(math.sqrt(X)) + 1):
        for p in range(2, int(math.log(X, b)) + 1):
            power = b ** p
            if power <= X:
                largest_power = max(largest_power, power)
            else:
                break
    return largest_power

X = int(input())
print(largest_perfect_power(X))