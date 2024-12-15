import sys

def is_harshad_number(n):
    # Calculate the sum of digits in n
    digit_sum = sum(int(d) for d in str(n))

    # Check if n is divisible by digit_sum
    if n % digit_sum == 0:
        return "Yes"
    else:
        return "No"

# Read N from input
n = int(sys.stdin.readline().strip())

# Check if N is a Harshad number
result = is_harshad_number(n)

# Print the result
print(result)