# Helper function to replace digits in the string
def replace_digits(s):
    # Initialize an empty string
    result = ""
    
    # Iterate through each character in the string
    for digit in s:
        # Replace the digit with multiple occurrences depending on its value
        result += digit * int(digit)
    
    # Return the modified string
    return result

# Read the string and K value from input
s = input()
K = int(input())

# Iterate for 5 * 10^15 days
for _ in range(5 * 10**15):
    # Replace the digits in the string
    s = replace_digits(s)
    
# Print the K-th character from the left in the final string
print(s[K-1])