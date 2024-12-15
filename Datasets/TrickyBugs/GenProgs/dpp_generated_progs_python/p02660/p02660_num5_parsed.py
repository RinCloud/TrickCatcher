import math

def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

def max_operations(N):
    prime_powers = set()
    operations = 0
    
    for prime in range(2, int(math.sqrt(N)) + 1):
        if is_prime(prime):
            power = prime
            while power <= N:
                if N % power == 0 and power not in prime_powers:
                    prime_powers.add(power)
                    N /= power
                    operations += 1
                else:
                    break
                
    return operations

N = int(input())
print(max_operations(N))