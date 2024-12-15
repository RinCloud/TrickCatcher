import math

def smallest_possible_sum(K):
    # Find the smallest positive multiple of K
    num = K
    while True:
        digits_sum = sum(int(digit) for digit in str(num))
        if digits_sum % K == 0:
            return digits_sum
        num += K

# Read the input from standard input
K = int(input())

# Call the function to find the smallest possible sum of digits
result = smallest_possible_sum(K)

# Print the result
print(result)