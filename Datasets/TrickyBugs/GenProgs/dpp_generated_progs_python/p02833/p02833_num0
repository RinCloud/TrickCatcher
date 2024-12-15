import math

def count_trailing_zeros(n):
    zeros = 0
    while n > 0:
        if n % 10 == 0:
            zeros += 1
            n = n // 10
        else:
            break
    return zeros

def factorial_trailing_zeros(N):
    if N < 2:
        return 0
    else:
        result = 1
        for i in range(2, N + 1, 2):
            result *= i
        return count_trailing_zeros(result)

N = int(input())
print(factorial_trailing_zeros(N))