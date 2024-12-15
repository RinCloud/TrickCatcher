"""
# Function to calculate minimum number of banknotes
def min_banknotes(N):
    # Initialize count and index of banknotes
    count = 0
    i = 0
    
    # Loop until N becomes 0
    while N > 0:
        # Calculate the largest banknote value less than or equal to N
        banknote = 10 ** (10 ** i)
        
        # Calculate the number of banknotes required
        num_banknotes = N // banknote
        
        # Update the count
        count += num_banknotes
        
        # Calculate the remaining amount after deducting the banknotes
        N = N - (num_banknotes * banknote)
        
        # Increment the index
        i += 1
    
    return count

# Reading the value of N from input
N = int(input())

# calculate the minimum number of total banknotes used by you and the clerk
result = min_banknotes(N)

# Print the result
print(result)
"""