def fib(n: int):
    if n <= 0:
        return "Invalid input. Please enter a positive integer."
    if n == 1:
        return 1
    if n == 2:
        return 1
    fibs = [1, 1]
    for i in range(2, n):
        fibs.append(fibs[i-1] + fibs[i-2])
    return fibs[-1]