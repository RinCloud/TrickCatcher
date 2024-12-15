def prime_fib(n: int):
    """
    prime_fib returns n-th number that is a Fibonacci number and it's also prime.
    """
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True
    
    fib_numbers = [0, 1]
    i = 2
    while len(fib_numbers) <= n:
        fib_num = fib_numbers[i-1] + fib_numbers[i-2]
        if is_prime(fib_num):
            fib_numbers.append(fib_num)
        i += 1
    
    return fib_numbers[n]