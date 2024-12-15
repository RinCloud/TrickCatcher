# Function to calculate the minimum number of operations required
def min_operations(s, k):
    # Calculate the length of string S
    len_s = len(s)
    
    # Check if all the characters in S are the same
    if len(set(s)) == 1:
        # If all characters are the same, calculate the number of operations required based on the length of S
        return (len_s * k) // 2
    
    # Initialize counts for the different characters in S
    char_counts = {}
    for char in s:
        if char in char_counts:
            char_counts[char] += 1
        else:
            char_counts[char] = 1
    
    # Calculate the number of operations required for adjacent characters to be different
    operations_required = 0
    if s[0] == s[len_s-1]:
        # If the first and last characters are the same, calculate the number of operations required based on the counts of the characters
        operations_required = (char_counts[s[0]] // 2) * k
    else:
        # If the first and last characters are different, calculate the number of operations required based on the counts of the characters
        operations_required = (char_counts[s[0]] // 2 + char_counts[s[len_s-1]] // 2) * k
        
    return operations_required

# Get the input values
s = input().strip()
k = int(input())

# Call the function to calculate the minimum number of operations required
result = min_operations(s, k)

# Print the result
print(result)