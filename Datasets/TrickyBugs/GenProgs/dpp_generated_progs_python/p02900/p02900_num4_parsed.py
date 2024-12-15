# Start of the program

def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)

def coprime_divisors(a, b):
    max_divisors = 0
    gcd_ab = gcd(a, b)
    
    # Finding divisors of gcd_ab
    for i in range(1, int(gcd_ab ** 0.5) + 1):
        if gcd_ab % i == 0:
            divisor1 = i
            divisor2 = gcd_ab // i
            
            # Checking if both divisors are coprime
            if gcd(divisor1, divisor2) == 1:
                max_divisors = max(max_divisors, 2)
            
            # Checking if divisor1 is coprime with a
            if gcd(divisor1, a) == 1:
                max_divisors = max(max_divisors, 1)
            
            # Checking if divisor1 is coprime with b
            if gcd(divisor1, b) == 1:
                max_divisors = max(max_divisors, 1)
            
            # Checking if divisor2 is coprime with a
            if gcd(divisor2, a) == 1:
                max_divisors = max(max_divisors, 1)
            
            # Checking if divisor2 is coprime with b
            if gcd(divisor2, b) == 1:
                max_divisors = max(max_divisors, 1)
    
    return max_divisors

# Reading input values
a, b = map(int, input().split())

# Finding maximum number of divisors that can be chosen
max_divisors = coprime_divisors(a, b)

# Printing the result
print(max_divisors)

# End of the program