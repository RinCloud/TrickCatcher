def nth_lucas_number(N):
    if N == 0:
        return 2
    elif N == 1:
        return 1
    else:
        a = 2
        b = 1
        for i in range(2, N+1):
            c = a + b
            a = b
            b = c
        return b

N = int(input())
print(nth_lucas_number(N))