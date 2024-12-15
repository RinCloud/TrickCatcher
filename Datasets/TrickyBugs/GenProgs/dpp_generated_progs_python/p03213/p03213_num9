import math

def count_shichi_go_numbers(N):
    # Calculate N! using math.factorial
    factorial = math.factorial(N)
    
    # Calculate the prime factors and their counts for N!
    prime_factors = {}
    for i in range(2, N+1):
        while factorial % i == 0:
            if i in prime_factors:
                prime_factors[i] += 1
            else:
                prime_factors[i] = 1
            factorial //= i
    
    # Count the number of Shichi-Go numbers
    count = 0
    for count in prime_factors.values():
        if count >= 74:
            count += 1
    
    return count

# Read input from standard input
N = int(input())

# Call the function and print the result
result = count_shichi_go_numbers(N)
print(result)