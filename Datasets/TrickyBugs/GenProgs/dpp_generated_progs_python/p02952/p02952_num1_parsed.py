# Read the input N
N = int(input())

# Initialize a variable count to keep track of the number of positive integers
count = 0

# Loop through all the positive integers less than or equal to N
for i in range(1, N+1):
    # Check if the number of digits is odd
    if len(str(i)) % 2 == 1:
        count += 1

# Print the count
print(count)