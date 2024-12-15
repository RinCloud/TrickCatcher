n = int(input())
strings = [input() for _ in range(n)]

# Create a dictionary to count the number of strings with the same prefix
prefix_count = {}

# Iterate through each string
for s in strings:
    # Initialize the count for this string
    count = 0
    
    # Iterate through each prefix of the string
    for i in range(1, len(s)):
        prefix = s[:i]
        if prefix in prefix_count:
            # If the prefix already exists, add the count to the total count
            count += prefix_count[prefix]
    
    # Update the count for this prefix
    if s in prefix_count:
        prefix_count[s] += count
    else:
        prefix_count[s] = count

# Get the total count of pairs
total_count = sum(prefix_count.values())

# Print the output
print(total_count)