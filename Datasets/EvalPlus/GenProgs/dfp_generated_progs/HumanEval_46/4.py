def fib4(n: int):
    fib_sequence = [0,0,2,0] # First four elements of the Fib4 number sequence
    for i in range(4, n+1):
        fib_sequence.append(fib_sequence[i-1] + fib_sequence[i-2] + fib_sequence[i-3] + fib_sequence[i-4])
    return fib_sequence[n]