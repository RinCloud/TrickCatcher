import math

N = int(input())

# calculate factorial of N
fact_N = math.factorial(N)

# find the number of positive divisors of the factorial of N
num_divisors = 0
for i in range(1, fact_N + 1):
    if fact_N % i == 0:
        num_divisors += 1

# print the number of positive divisors modulo 10^9+7
print(num_divisors % (10**9 + 7))