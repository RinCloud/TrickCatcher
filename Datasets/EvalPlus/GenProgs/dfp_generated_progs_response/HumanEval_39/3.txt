def prime_fib(n: int):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True
    
    def fibonacci(n):
        fib = [0, 1]
        if n < 2:
            return fib[:n + 1]
        for i in range(2, n + 1):
            fib.append(fib[i - 1] + fib[i - 2])
        return fib
    
    fib_numbers = fibonacci(20)
    prime_fib_numbers = []
    i = 0
    while len(prime_fib_numbers) < n:
        num = fib_numbers[i]
        if is_prime(num):
            prime_fib_numbers.append(num)
        i += 1
    
    return prime_fib_numbers[n - 1]