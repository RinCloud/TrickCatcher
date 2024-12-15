s = input()
k = int(input())

# Calculate the length of the string
length = len(s)

# Count the number of adjacent characters that are the same
adjacent_count = 0
for i in range(length - 1):
    if s[i] == s[i + 1]:
        adjacent_count += 1

# Calculate the minimum number of operations required
min_operations = adjacent_count * k // 2

# Print the output
print(min_operations)