# Taking input
N = int(input())

# Function to check if a number has an odd number of digits
def odd_digits(num):
    # Converting the number to string and counting the number of digits
    num_digits = len(str(num))
    # If the number of digits is odd, return True
    if num_digits % 2 != 0:
        return True
    # If the number of digits is even, return False
    else:
        return False

# Counting the number of positive integers less than or equal to N
count = 0
for i in range(1, N+1):
    if odd_digits(i):
        count += 1

# Print the result
print(count)