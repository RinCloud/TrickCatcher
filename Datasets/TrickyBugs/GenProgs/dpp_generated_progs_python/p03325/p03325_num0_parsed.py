import sys

# Read n and the sequence from input
n = int(input())
a = list(map(int, input().split()))

# Initialize the counter for number of operations
count = 0

# Iterate over each element in the sequence
for i in range(n):
    # Divide the element by 2 as many times as possible
    while a[i] % 2 == 0:
        a[i] /= 2
        count += 1

# Print the maximum number of operations
print(count)