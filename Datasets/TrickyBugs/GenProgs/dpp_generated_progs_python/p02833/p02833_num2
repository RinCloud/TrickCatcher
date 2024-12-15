import math

def count_trailing_zeros(N):
    zeros = 0
    i = 5
    while N / i >= 1:
        zeros += int(N / i)
        i *= 5
    return zeros

N = int(input())
zeros = count_trailing_zeros(N)
print(zeros)