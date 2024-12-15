import math

N = int(input())

# calculate N!
fac = math.factorial(N)

# iterate through all numbers from 1 to N!
# check if each number is a positive divisor
count = 0
for i in range(1, fac+1):
    if fac % i == 0:
        count += 1

# print the number of positive divisors modulo 10^9+7
print(count % (10**9 + 7))