import math

def count_odd_numbers_with_eight_divisors(N):
    count = 0
    for i in range(1, N+1):
        if is_odd_number_with_eight_divisors(i):
            count += 1
    return count

def is_odd_number_with_eight_divisors(num):
    divisors = 0
    for i in range(1, int(math.sqrt(num))+1):
        if num % i == 0:
            divisors += 2
        if divisors > 8:
            return False
    if math.sqrt(num) == int(math.sqrt(num)):
        divisors -= 1
    if num % 2 != 0 and divisors == 8:
        return True
    return False

N = int(input())

print(count_odd_numbers_with_eight_divisors(N))