# Get the input
N = int(input())
A = list(map(int, input().split()))

# Initialize the counter for number of operations
count = 0

# Perform operations until all integers are odd
while all(a % 2 == 0 for a in A):
    # Divide all integers by 2
    A = [a // 2 for a in A]
    count += 1

# Print the maximum number of operations that can be performed
print(count)