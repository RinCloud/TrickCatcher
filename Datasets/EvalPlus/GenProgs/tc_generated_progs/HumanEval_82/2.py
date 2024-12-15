def prime_length(string):
    def is_prime(n):
        if n <= 1:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True
    return is_prime(len(string)) if len(string) > 1 else False