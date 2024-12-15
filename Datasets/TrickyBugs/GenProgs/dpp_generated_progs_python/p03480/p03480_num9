s = input()

# Initialize the maximum length
max_length = 0

# Initialize the count for consecutive characters
count = 0

# Iterate through the characters of the string
for char in s:
    # If the character is same as the previous character, increment the count
    if char == "0":
        count += 1
    else:
        # If the count is greater than the maximum length, update the maximum length
        if count > max_length:
            max_length = count
        # Reset the count
        count = 0

# If the count at the end is greater than the maximum length, update the maximum length
if count > max_length:
    max_length = count

# Print the maximum length
print(max_length)