# Program to find the maximum possible length of the sequence that satisfies the given conditions

def find_max_length(X, Y):
    # Initialize maximum length to 0
    max_length = 0
    
    # Start with the smallest number X
    num = X
    
    # Iterate until num becomes greater than Y
    while num <= Y:
        # Increment the length
        max_length += 1
        
        # Multiply num by 2 to get the next multiple
        num *= 2
    
    # Return the maximum length
    return max_length

# Read input values
X, Y = map(int, input().split())

# Call the function to find the maximum length
max_length = find_max_length(X, Y)

# Print the maximum length
print(max_length)