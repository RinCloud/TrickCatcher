# Taking input the value of N
N = int(input())

# Count variable to store the number of positive integers with odd number of digits
count = 0

# Loop through the numbers from 1 to N
for i in range(1, N+1):
    # Check if the number has an odd number of digits
    if len(str(i)) % 2 != 0:
        count += 1

# Print the count
print(count)