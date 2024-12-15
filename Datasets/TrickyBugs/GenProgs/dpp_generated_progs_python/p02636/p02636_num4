s = input()

# Apply the operation zero or more times
# Initialize the count as 1
count = 1

# Iterate through the characters in the string
for i in range(len(s)):
    # Check if the current character is '0' and the next character is '1'
    if s[i] == '0' and i+1 < len(s) and s[i+1] == '1':
        # Update the count by multiplying it with 2
        count *= 2
        # Skip the next character, since it will be erased
        i += 1

# Print the final count modulo 998244353
print(count % 998244353)