import math

def largest_perfect_power(X):
    largest_power = 1
    for p in range(2, int(math.log2(X)) + 1):
        b = int(X ** (1 / p))
        power = b ** p
        if power <= X and power > largest_power:
            largest_power = power
    return largest_power


# Read the input from standard input
X = int(input())

# Call the function and print the result
print(largest_perfect_power(X))