# Get the input N
N = int(input())

# Initialize a counter variable
count = 0

# Iterate through all numbers from 1 to N
for num in range(1, N+1):
    # Check if the number of digits in the current number is odd
    if len(str(num)) % 2 != 0:
        count += 1

# Print the final count
print(count)