import math

n = int(input())
m = n

answer = 0
i = 2
factors = []

while i ** 2 <= m:
    t = 0
    while n % i == 0:
        n //= i
        t += 1
    factors.append(t)
    i += 1

if n > 1:
    factors.append(1)

for f in factors:
    answer += int((-1+math.sqrt(1+8*f)) / 2)

print(answer)