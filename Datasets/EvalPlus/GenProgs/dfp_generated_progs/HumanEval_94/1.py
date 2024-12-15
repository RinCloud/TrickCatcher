def skjkasdkd(lst):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True
    
    largest_prime = None
    for num in lst:
        if is_prime(num):
            if largest_prime is None or num > largest_prime:
                largest_prime = num
    
    if largest_prime is None:
        return 0
    
    digit_sum = 0
    for digit in str(largest_prime):
        digit_sum += int(digit)
    
    return digit_sum