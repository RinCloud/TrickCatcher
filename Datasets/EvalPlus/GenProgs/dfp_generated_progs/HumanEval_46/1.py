def fib4(n: int):
    sequence = [0, 0, 2, 0] # initial sequence values
    if n <= 3:
        return sequence[n]
    else:
        for i in range(4, n+1):
            fib_n = sequence[-1] + sequence[-2] + sequence[-3] + sequence[-4] # calculate fib4(n)
            sequence.append(fib_n) # append the calculated value to the sequence
        return sequence[-1]