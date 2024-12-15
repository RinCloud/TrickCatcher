def prime_fib(n: int) -> int:
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
    
    fib_seq = [0, 1]
    count = 0
    while count < n:
        next_num = fib_seq[-1] + fib_seq[-2]
        if is_prime(next_num):
            count += 1
            fib_seq.append(next_num)
        else:
            fib_seq.append(next_num)
    return fib_seq[n]