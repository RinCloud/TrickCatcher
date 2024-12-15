import sys

def digit_sum(n):
    total = 0
    while n > 0:
        total += n % 10
        n = n // 10
    return total

def smallest_digit_sum(K):
    i = 1
    while True:
        if digit_sum(K * i) % 9 == 0:
            sys.stdout.write(str(digit_sum(K * i)))
            break
        i += 1

K = int(input())
smallest_digit_sum(K)