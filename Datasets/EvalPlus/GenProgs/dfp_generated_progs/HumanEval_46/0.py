def fib4(n: int):
    if n == 0:
        return 0
    elif n <= 3:
        return 2
    else:
        fib_last_4 = [0, 0, 2, 0]
        i = 4
        while i <= n:
            fib_last_4.append(fib_last_4[i-1] + fib_last_4[i-2] + fib_last_4[i-3] + fib_last_4[i-4])
            fib_last_4.pop(0)
            i += 1
        return fib_last_4[-1]