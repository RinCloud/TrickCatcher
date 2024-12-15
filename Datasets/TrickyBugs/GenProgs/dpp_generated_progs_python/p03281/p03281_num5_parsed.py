def count_numbers_with_eight_divisors(N):
    count = 0

    for i in range(1, N+1):
        if is_odd(i) and count_divisors(i) == 8:
            count += 1

    return count

def is_odd(num):
    return num % 2 != 0

def count_divisors(num):
    count = 0

    for i in range(1, num+1):
        if num % i == 0:
            count += 1

    return count

N = int(input())

print(count_numbers_with_eight_divisors(N))