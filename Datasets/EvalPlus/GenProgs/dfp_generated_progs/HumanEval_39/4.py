def is_prime(n: int) -> bool:
    """
    is_prime returns True if a number is prime, False otherwise.
    """
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True
def prime_fib(n: int) -> int:
    """
    prime_fib returns n-th number that is a Fibonacci number and it's also prime.
    """
    fib_list = [0, 1]
    count = 2
    while count < n+1:
        next_num = fib_list[-1] + fib_list[-2]
        if is_prime(next_num):
            fib_list.append(next_num)
            count += 1
        else:
            fib_list.append(next_num)
    return fib_list[n-1]