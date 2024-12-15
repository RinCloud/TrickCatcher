def fibfib(n: int):
    if n == 0:
        return 0
    elif n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        fib1, fib2, fib3 = 0, 0, 1
        for i in range(3, n + 1):
            fib = fib1 + fib2 + fib3
            fib1, fib2, fib3 = fib2, fib3, fib
        return fib3