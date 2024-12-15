def maximum_operations(N, A):
    # Initialize a variable to keep track of the maximum possible number of operations
    max_operations = 0
    
    # Check if all integers on the blackboard are even
    while all(x % 2 == 0 for x in A):
        # Perform the operation by dividing each integer by 2
        A = [x // 2 for x in A]
        
        # Increment the count of operations performed
        max_operations += 1
    
    return max_operations

# Read the input
N = int(input())
A = list(map(int, input().split()))

# Call the function and print the result
print(maximum_operations(N, A))