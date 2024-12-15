import math

N = int(input())

max_divisible = 0
num = 0

for i in range(1, N+1):
    divisible = 0
    while i % 2 == 0:
        i //= 2
        divisible += 1
    if divisible > max_divisible:
        max_divisible = divisible
        num = i

print(num)