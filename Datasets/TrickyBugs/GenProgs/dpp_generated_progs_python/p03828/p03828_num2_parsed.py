import math

def count_divisors_modulo(n):
    mod = 10**9 + 7
    factorial = math.factorial(n)
    divisors = 0
    for i in range(1, int(math.sqrt(factorial)) + 1):
        if factorial % i == 0:
            if factorial // i == i:
                divisors += 1
            else:
                divisors += 2
    return divisors % mod

# Read input from standard input
n = int(input())

# Call the function and print the result
print(count_divisors_modulo(n))