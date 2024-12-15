**SOLUTION**:
import math

n = int(input())
m = n

answer = 0
i = 2
while i ** 2 <= m:
    t = 0
    while n % i == 0:
        n //= i
        t += 1
    answer += t
    i += 1

if n > 1:
    answer += 1

print(answer)