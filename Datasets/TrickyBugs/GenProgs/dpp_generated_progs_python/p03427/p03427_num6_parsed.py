n = int(input())

# Function to calculate the sum of digits of a number
def sum_of_digits(num):
    total = 0
    while num > 0:
        total += num % 10
        num //= 10
    return total

# Find the maximum possible sum of digits
max_sum = 0
for i in range(n, 0, -1):
    if sum_of_digits(i) > max_sum:
        max_sum = sum_of_digits(i)
        if max_sum == 45:
            break

print(max_sum)