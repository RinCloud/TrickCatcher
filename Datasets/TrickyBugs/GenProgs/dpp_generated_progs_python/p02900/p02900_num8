a, b = map(int, input().split())

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def get_divisors(n):
    divisors = set()
    i = 1
    while i * i <= n:
        if n % i == 0:
            divisors.add(i)
            divisors.add(n // i)
        i += 1
    return divisors

common_divisors = get_divisors(gcd(a, b))
max_divisors = 0

for divisor in common_divisors:
    if all(gcd(divisor, d) == 1 for d in common_divisors if d != divisor):
        max_divisors += 1

print(max_divisors)