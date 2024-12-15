import math

def count_shichi_go_numbers(N):
    factor_count = [0] * (N+1)
    
    # Calculate the prime factorization for each number from 2 to N
    for i in range(2, N+1):
        num = i
        for j in range(2, int(math.sqrt(i))+1):
            while num % j == 0:
                factor_count[j] += 1
                num /= j
        if num > 1:
            factor_count[num] += 1
    
    # Calculate the count of divisors for each prime factor
    divisors_count = [0] * (N+1)
    for i in range(2, N+1):
        count = factor_count[i]
        for j in range(1, count+1):
            divisors_count[j] += 1
    
    # Count the number of Shichi-Go numbers based on the divisors count
    shichi_go_count = 0
    for i in range(1, N+1):
        if divisors_count[i] >= 74:
            shichi_go_count += 1
    
    return shichi_go_count


# Read the input value of N
N = int(input())

# Call the function to count the number of Shichi-Go numbers
result = count_shichi_go_numbers(N)

# Print the result
print(result)