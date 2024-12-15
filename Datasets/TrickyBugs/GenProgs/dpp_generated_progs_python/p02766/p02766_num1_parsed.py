# Reading the input values
N, K = map(int, input().split())

# Function to find the number of digits in base K
def count_digits(num, base):
    count = 0
    while num > 0:
        num //= base
        count += 1
    return count

# Printing the result
print(count_digits(N, K))