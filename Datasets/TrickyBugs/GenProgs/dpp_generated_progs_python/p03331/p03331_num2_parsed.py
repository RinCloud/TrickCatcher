# Taking the input
N = int(input())

# Initialize the minimum sum of digits
min_sum = float('inf')

# Iterate from 1 to N//2
for i in range(1, N//2+1):
    # Get the sum of digits of both numbers
    sum_digits = sum(map(int, str(i))) + sum(map(int, str(N-i)))

    # Update the minimum sum if needed
    min_sum = min(min_sum, sum_digits)

# Print the minimum sum of digits
print(min_sum)