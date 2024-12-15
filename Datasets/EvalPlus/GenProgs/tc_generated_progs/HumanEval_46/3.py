def fib4(n: int):
    if n == 0:
        return 0
    elif n == 1:
        return 0
    elif n == 2:
        return 2
    elif n == 3:
        return 0
    
    fib_values = [0, 0, 2, 0]
    
    for i in range(4, n+1):
        next_val = fib_values[-1] + fib_values[-2] + fib_values[-3] + fib_values[-4]
        fib_values.append(next_val)
    return fib_values[-1]