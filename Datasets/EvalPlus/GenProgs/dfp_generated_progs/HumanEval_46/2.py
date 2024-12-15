def fib4(n: int):
    if n == 0:
        return 0
    elif n == 1:
        return 0
    elif n == 2:
        return 2
    elif n == 3:
        return 0
    
    fib_seq = [0, 0, 2, 0]
    for i in range(4, n+1):
        fib_seq.append(fib_seq[i-1] + fib_seq[i-2] + fib_seq[i-3] + fib_seq[i-4])
    
    return fib_seq[n]