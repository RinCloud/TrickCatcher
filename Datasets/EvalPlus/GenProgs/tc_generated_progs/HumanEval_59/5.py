def largest_prime_factor(n: int):
    largest = 1
    divisor = 2
    
    while divisor <= n:
        if n % divisor == 0:
            largest = divisor
            n = n // divisor
        else:
            divisor += 1
    
    return largest