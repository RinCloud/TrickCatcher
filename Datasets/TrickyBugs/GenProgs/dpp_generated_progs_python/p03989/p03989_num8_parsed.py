# Program to calculate the number of permutations satisfying the given condition

# Function to calculate the factorial of a number
def factorial(n):
    result = 1
    for i in range(1, n+1):
        result = (result * i) % 924844033
    return result

# Function to calculate the modular inverse of a number
def modular_inverse(n):
    return pow(n, 924844033-2, 924844033)

# Function to calculate the number of valid permutations
def calculate_permutations(n, k):
    if k == 0:
        return factorial(n-1)
    elif k > n-1:
        return 0

    c = 0
    for i in range(0, n):
        a = i - k
        while a < n:
            if abs(a-i) != k:
                c += 1
            a += n-k
    
    return (c * modular_inverse(factorial(n))) % 924844033

# Getting input from user
n, k = map(int, input().split())

# Calculating and printing the result
result = calculate_permutations(n, k)
print(result)