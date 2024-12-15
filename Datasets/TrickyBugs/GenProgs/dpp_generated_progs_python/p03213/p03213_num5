import math

def count_shichi_go_numbers(N):
    def get_prime_factors(n):
        factors = []
        while n % 2 == 0:
            factors.append(2)
            n = n // 2

        for i in range(3, int(math.sqrt(n)) + 1, 2):
            while n % i == 0:
                factors.append(i)
                n = n // i

        if n > 2:
            factors.append(n)

        return factors

    def count_divisors(prime_factors):
        divisors = 1
        unique_factors = set(prime_factors)
        for factor in unique_factors:
            power = prime_factors.count(factor)
            divisors *= (power + 1)

        return divisors

    if N <= 4:
        return 0

    factorial = math.factorial(N)
    prime_factors = get_prime_factors(factorial)
    shichi_go_numbers = 0

    divisors = count_divisors(prime_factors)
    if divisors == 75:
        shichi_go_numbers += 1

    return shichi_go_numbers


N = int(input())
print(count_shichi_go_numbers(N))