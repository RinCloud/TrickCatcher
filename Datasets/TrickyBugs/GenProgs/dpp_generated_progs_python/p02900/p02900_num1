import math

def find_common_divisors(A, B):
    # Find the common divisors of A and B
    common_divisors = []
    for i in range(1, min(A, B) + 1):
        if A % i == 0 and B % i == 0:
            common_divisors.append(i)
    
    return common_divisors

def find_coprime_divisors(A, B):
    # Find the divisors that are coprime
    common_divisors = find_common_divisors(A, B)
    coprime_divisors = []
    for divisor in common_divisors:
        is_coprime = True
        for other_divisor in coprime_divisors:
            if math.gcd(divisor, other_divisor) != 1:
                is_coprime = False
                break
        if is_coprime:
            coprime_divisors.append(divisor)
    
    return coprime_divisors

def max_num_divisors(A, B):
    # Find the maximum number of divisors that can be chosen
    coprime_divisors = find_coprime_divisors(A, B)
    return len(coprime_divisors)

# Read the input from standard input
A, B = map(int, input().split())

# Find the maximum number of divisors that can be chosen
max_divisors = max_num_divisors(A, B)

# Print the result
print(max_divisors)