import math

def is_prime(x):
    if x < 2:
        return False
    for i in range(2, int(math.sqrt(x))+1):
        if x % i == 0:
            return False
    return True

n = int(input())
m = n

answer = 0
i = 2
primes = []
while i ** 2 <= m:
    if is_prime(i):
        primes.append(i)
        while n % i == 0:
            n //= i
            answer += 1
    i += 1

if n > 1:
    answer += 1

print(answer)