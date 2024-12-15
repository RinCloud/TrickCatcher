# Taking input from standard input
N = int(input())
K = int(input())

# Initializing the count
count = 0

# Looping through the numbers from 1 to N
for num in range(1, N+1):
    # Converting the number to string and counting the non-zero digits
    num_str = str(num)
    non_zero_digits = sum(1 for digit in num_str if digit != '0')

    # Incrementing the count if the number has exactly K non-zero digits
    if non_zero_digits == K:
        count += 1

# Printing the count
print(count)