import sys

# Read input
N = int(input())
a = list(map(int, input().split()))

# Create a frequency table to count occurrences of each number
freq = {}
for num in a:
    freq[num] = freq.get(num, 0) + 1

# Initialize the maximum count
max_count = 0

# Iterate through each number and try adding, subtracting, or doing nothing
for num in freq:
    for offset in [-1, 0, 1]:
        new_num = num + offset
        # Skip if the new number is negative or greater than 10^5
        if new_num < 0 or new_num >= 10**5:
            continue
        # Calculate the new count by subtracting the old count and adding the new count
        new_count = freq.get(new_num, 0) - freq[num]
        # Update the maximum count if the new count is greater
        if new_count > max_count:
            max_count = new_count

# Print the maximum count
print(max_count)