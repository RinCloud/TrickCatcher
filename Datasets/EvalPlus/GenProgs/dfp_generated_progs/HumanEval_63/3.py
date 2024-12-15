def fibfib(n: int):
    if n == 0:
        return 0
    elif n == 1:
        return 0
    elif n == 2:
        return 1
    elif n > 2:
        fib_cache = [0, 0, 1]
        for i in range(3, n+1):
            fib_cache.append(fib_cache[i-1] + fib_cache[i-2] + fib_cache[i-3])
        return fib_cache[n]