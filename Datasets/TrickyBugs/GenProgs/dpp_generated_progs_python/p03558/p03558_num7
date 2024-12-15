# Function to find the smallest possible sum of the digits in the decimal notation of a positive multiple of K
def min_sum_digits(K):
    # Initialize the current sum of digits
    sum_digits = 0
    # Initialize the current multiple
    multiple = K
    # Iterate until the sum of digits is less than or equal to 1
    while sum_digits <= 1:
        # Calculate the sum of digits
        sum_digits = sum(int(digit) for digit in str(multiple))
        # Increment the multiple by K
        multiple += K
    # Return the minimum sum of digits
    return sum_digits

# Read the input value of K
K = int(input())

# Call the function to find the smallest possible sum of digits
smallest_sum = min_sum_digits(K)

# Print the smallest possible sum of digits
print(smallest_sum)