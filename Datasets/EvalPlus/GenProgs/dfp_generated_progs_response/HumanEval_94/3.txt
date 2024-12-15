def skjkasdkd(lst):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**(1/2))+1):
            if n % i == 0:
                return False
        return True
    
    prime_values = [num for num in lst if is_prime(num)]
    
    if not prime_values:
        return 0
    
    largest_prime = max(prime_values)
    digit_sum = sum(int(digit) for digit in str(largest_prime))
    return digit_sum