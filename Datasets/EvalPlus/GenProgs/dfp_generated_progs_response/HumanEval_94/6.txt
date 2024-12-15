def skjkasdkd(lst):
    def is_prime(n):
        if n <= 1:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True
    
    prime_list = [num for num in lst if is_prime(num)]
    max_prime = max(prime_list)
    sum_digits = sum(int(digit) for digit in str(max_prime))
    return sum_digits