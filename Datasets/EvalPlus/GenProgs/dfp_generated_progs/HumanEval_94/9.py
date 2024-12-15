def skjkasdkd(lst):
    def is_prime(n):
        if n <= 1:
            return False
        for i in range(2, int(n ** 0.5) + 1):
            if n % i == 0:
                return False
        return True
    largest_prime = 0
    for num in lst:
        if is_prime(num) and num > largest_prime:
            largest_prime = num
    
    sum_of_digits = 0
    while largest_prime > 0:
        digit = largest_prime % 10
        sum_of_digits += digit
        largest_prime //= 10
    
    return sum_of_digits