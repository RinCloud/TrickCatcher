import math

def largest_perfect_power(X):
    # Finding the largest perfect power less than or equal to X
    largest_power = 0
    b = 1
    while b ** 2 <= X:
        p = 2
        while b ** p <= X:
            largest_power = max(largest_power, b ** p)
            p += 1
        b += 1
    
    return largest_power

# Reading the input
X = int(input())

# Finding the largest perfect power
result = largest_perfect_power(X)

# Printing the result
print(result)