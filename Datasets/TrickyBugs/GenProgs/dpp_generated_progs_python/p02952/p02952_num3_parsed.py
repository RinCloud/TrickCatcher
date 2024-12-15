# Taking input from the user
N = int(input())

# Initializing a count variable
count = 0

# Iterating through the positive integers less than or equal to N
for i in range(1, N + 1):
    # Checking if the number has an odd number of digits
    if len(str(i)) % 2 != 0:
        count += 1

# Printing the count
print(count)