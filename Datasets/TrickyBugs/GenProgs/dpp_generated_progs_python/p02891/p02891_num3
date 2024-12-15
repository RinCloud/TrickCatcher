# Program:

# Function to count the minimum number of operations
def min_operations(s, k):
    # Length of string S
    n = len(s)
    
    # If string only has one character
    if n == 1:
        return 0
    
    # If all characters in S are the same
    if len(set(s)) == 1:
        return n * k // 2
    
    # Initialize count of operations
    count = 0
    
    # Count the number of operations needed at the beginning and end for each copy of S
    for i in range(1, n):
        if s[i] == s[i-1]:
            count += 1
    count *= k
    
    # Additional operations needed at the end of the last copy of S
    if s[0] == s[n-1]:
        count += k - 1
    
    return count

# Read input from standard input
s = input().strip() # String S
k = int(input().strip()) # Number of copies

# Call the function to find minimum number of operations
result = min_operations(s, k)

# Print the result
print(result)