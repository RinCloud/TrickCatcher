import math

def count_shichi_go_numbers(N):
    # Calculate the factorial of N
    factorial = math.factorial(N)
    
    # Calculate the prime factors of the factorial
    factor_counts = {}
    for i in range(2, N+1):
        while factorial % i == 0:
            factorial //= i
            if i in factor_counts:
                factor_counts[i] += 1
            else:
                factor_counts[i] = 1
                
    # Calculate the number of divisors with 75 divisors
    count = 0
    for count in factor_counts.values():
        if count >= 74:
            count += 1
    
    return count

# Read input from standard input
N = int(input())

# Print the number of Shichi-Go numbers
print(count_shichi_go_numbers(N))