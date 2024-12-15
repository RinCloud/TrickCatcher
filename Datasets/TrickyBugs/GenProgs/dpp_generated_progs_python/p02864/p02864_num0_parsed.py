def min_number_operations(N, K, H):
    # Sort the columns from left to right based on the number of squares to be painted
    sorted_columns = sorted(range(N), key=lambda i: -H[i])
    
    # Initialize the count of operations
    count = 0
    
    # Set the number of squares to be painted for the first K columns
    for i in range(K):
        count += H[sorted_columns[i]]
        H[sorted_columns[i]] = 0
    
    # Calculate the minimum number of operations required
    for i in range(N):
        count += H[sorted_columns[i]]
    
    return count

# Read the input
N, K = map(int, input().split())
H = list(map(int, input().split()))

# Call the function and print the result
print(min_number_operations(N, K, H))