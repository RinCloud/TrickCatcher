import math

def count_odd_numbers(n):
    count = 0
    for num in range(1, n+1):
        if num % 2 == 1 and count_divisors(num) == 8:
            count += 1
    return count

def count_divisors(num):
    count = 0
    for i in range(1, int(math.sqrt(num)) + 1):
        if num % i == 0:
            count += 2
            if i == (num // i):
                count -= 1
    return count

n = int(input())

print(count_odd_numbers(n))