def fib4(n: int):
    if n == 0 or n == 1:
        return 0
    elif n == 2:
        return 2
    else:
        fib_seq = [0, 0, 2]
        for i in range(3, n + 1):
            fib_seq.append(fib_seq[i-1] + fib_seq[i-2] + fib_seq[i-3] + fib_seq[i-4])
    return fib_seq[n]