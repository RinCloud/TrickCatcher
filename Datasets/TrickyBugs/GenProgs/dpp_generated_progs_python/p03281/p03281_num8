import math

def count_odd_numbers_with_eight_divisors(N):
    count = 0
    for i in range(1, N+1):
        if i % 2 != 0 and get_divisor_count(i) == 8:
            count += 1
    return count

def get_divisor_count(num):
    count = 0
    for i in range(1, int(math.sqrt(num)) + 1):
        if num % i == 0:
            count += 2
    if int(math.sqrt(num)) ** 2 == num:
        count -= 1
    return count

N = int(input().strip())
print(count_odd_numbers_with_eight_divisors(N))