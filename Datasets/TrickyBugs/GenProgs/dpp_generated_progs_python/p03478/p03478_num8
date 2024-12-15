# Read the input values
N, A, B = map(int, input().split())

# Variable to store the sum
total_sum = 0

# Iterate through all the integers between 1 and N (inclusive)
for i in range(1, N+1):
    # Get the sum of digits for the current integer
    digit_sum = sum(map(int, str(i)))
    
    # Check if the sum is within the range A and B (inclusive)
    if A <= digit_sum <= B:
        total_sum += i

# Print the total sum
print(total_sum)