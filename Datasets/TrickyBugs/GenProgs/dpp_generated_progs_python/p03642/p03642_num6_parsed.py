import math

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(math.sqrt(num))+1):
        if num % i == 0:
            return False
    return True

def minimum_operations(N, x):
    max_x = max(x)
    primes = [i for i in range(2, max_x+1) if is_prime(i)]

    operations = 0
    for prime in primes:
        if all((num % prime) == 1 for num in x):
            operations += 1
    return operations

# Read input
N = int(input())
x = list(map(int, input().split()))

# Call the function and print the result
print(minimum_operations(N, x))