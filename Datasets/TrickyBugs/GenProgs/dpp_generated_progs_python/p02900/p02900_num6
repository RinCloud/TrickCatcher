from math import gcd

A, B = map(int, input().split())

# count number of common divisors
common_divisors = 0
for i in range(1, min(A, B) + 1):
    if A % i == 0 and B % i == 0:
        common_divisors += 1

# find maximum number of divisors that can be chosen
max_chosen_divisors = 0
for i in range(1, common_divisors + 1):
    # check if any two chosen divisors are coprime
    coprime = True
    for j in range(1, i):
        if gcd(i, j) != 1:
            coprime = False
            break
    if coprime:
        max_chosen_divisors = i

print(max_chosen_divisors)