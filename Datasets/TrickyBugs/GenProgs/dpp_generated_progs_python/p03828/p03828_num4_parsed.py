import math

def count_divisors(N):
    mod = 10**9 + 7
    factorial = math.factorial(N)
    
    divisors = 0
    for i in range(1, int(math.sqrt(factorial)) + 1):
        if factorial % i == 0:
            divisors += 2
            if i == factorial // i:
                divisors -= 1
                
    return divisors % mod

# Read the integer N from input
N = int(input())

# Call the count_divisors function and print the result
print(count_divisors(N))