def prime_fib(n: int):
    """
    prime_fib returns n-th number that is a Fibonacci number and it's also prime.
    """
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True
    
    fib_seq = [0, 1]
    while len(fib_seq) < n+1:
        fib_seq.append(fib_seq[-1] + fib_seq[-2])
    primes = [num for num in fib_seq if is_prime(num)]
    
    return primes[n-1] if n <= len(primes) else None