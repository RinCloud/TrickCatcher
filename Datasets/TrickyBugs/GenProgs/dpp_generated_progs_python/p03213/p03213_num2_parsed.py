import math

def count_shichi_go_numbers(N):
    # Calculate the factorial of N
    factorial = math.factorial(N)
    
    # Initialize the count of Shichi-Go numbers
    count = 0
    
    # Find the divisors of factorial
    for i in range(1, int(math.sqrt(factorial)) + 1):
        if factorial % i == 0:
            # If i is a divisor, check if it has exactly 75 divisors
            if count_divisors(i) == 75:
                count += 1
            # Check if the quotient is a different divisor
            if i != factorial // i and count_divisors(factorial // i) == 75:
                count += 1
    
    return count

def count_divisors(n):
    # Initialize the count of divisors
    count = 0
    
    # Find the divisors of n
    for i in range(1, int(math.sqrt(n)) + 1):
        if n % i == 0:
            count += 2
    
    # Check if n is a perfect square
    if int(math.sqrt(n))**2 == n:
        count -= 1
    
    return count


# Read the input
N = int(input())

# Count the number of Shichi-Go numbers
result = count_shichi_go_numbers(N)

# Print the result
print(result)