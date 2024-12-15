# Get N
N = int(input())

# Get the list of integers
A = list(map(int, input().split()))

# Initialize the sum
total = sum(A)

# Check if the sum is negative
if total < 0:
    # Multiply all the integers by -1
    A = [-x for x in A]
    # Update the sum
    total = -total

# Print the sum
print(total)