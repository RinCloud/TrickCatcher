
import math

n = int(input())
m = n

answer = 0
i = 2
while i <= m:
    t = 0
    while n % i == 0:
        n //= i
        t += 1
    answer += int((-1+math.sqrt(1+8*t)) / 2)
    i += 1
if n != 1:
        answer += 1

print(answer)

