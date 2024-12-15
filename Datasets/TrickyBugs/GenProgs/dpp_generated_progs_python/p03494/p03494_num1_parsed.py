# Read the number of integers
n = int(input())

# Read the integers
integers = list(map(int, input().split()))

# Initialize the maximum operations count as 0
max_operations = 0

# Check if all integers are even
while all(num % 2 == 0 for num in integers):
    # Perform the operation and increment the operations count
    integers = [num // 2 for num in integers]
    max_operations += 1

# Print the maximum operations count
print(max_operations)
