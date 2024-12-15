def skjkasdkd(lst):
    def is_prime(n):
        if n <= 1:
            return False
        for i in range(2, int(n ** 0.5) + 1):
            if n % i == 0:
                return False
        return True
    
    max_prime = 0
    for num in lst:
        if is_prime(num) and num > max_prime:
            max_prime = num
    
    return sum(int(digit) for digit in str(max_prime))