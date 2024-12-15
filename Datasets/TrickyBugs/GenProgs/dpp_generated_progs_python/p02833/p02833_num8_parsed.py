import math

def count_trailing_zeros(n):
    count = 0
    while n % 10 == 0:
        count += 1
        n //= 10
    return count

def f(n):
    if n < 2:
        return 1
    else:
        return n * f(n-2)

N = int(input())
result = count_trailing_zeros(f(N))
print(result)