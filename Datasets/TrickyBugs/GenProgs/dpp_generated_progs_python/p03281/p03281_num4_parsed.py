import math

def count_numbers_with_eight_divisors(N):
    count = 0
    for num in range(1, N+1):
        if num % 2 == 1 and count_divisors(num) == 8:
            count += 1
    return count

def count_divisors(num):
    count = 0
    for i in range(1, int(math.sqrt(num)) + 1):
        if num % i == 0:
            count += 2
    if math.sqrt(num) * math.sqrt(num) == num:
        count -= 1
    return count

N = int(input())
print(count_numbers_with_eight_divisors(N))