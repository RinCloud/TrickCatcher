def trailing_zeros(N):
    count = 0
    
    # Check if N is less than 2
    if N < 2:
        return count
    
    # Count the number of trailing zeros
    while N >= 5:
        N //= 5
        count += N
    
    return count


# Read the input from Standard Input
N = int(input())

# Calculate the number of trailing zeros
result = trailing_zeros(N)

# Print the result
print(result)