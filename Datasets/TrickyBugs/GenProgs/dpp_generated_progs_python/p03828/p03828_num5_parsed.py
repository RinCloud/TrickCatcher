import math

N = int(input())

def count_divisors(n):
    count = 0
    for i in range(1, int(math.sqrt(n)) + 1):
        if n % i == 0:
            count += 2
            if i == n // i:
                count -= 1
    return count

result = 1
for i in range(2, N+1):
    result = (result * i) % (10**9 + 7)

divisors = count_divisors(result)
print(divisors)