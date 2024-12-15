def trailing_zeros(N):
    zeros = 0
    i = 5
    while N // i >= 1:
        zeros += N // i
        i *= 5
    return zeros

N = int(input())
print(trailing_zeros(N))