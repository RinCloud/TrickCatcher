def count_operations(A, B):
    # Check if the goal is already achieved
    if A == B:
        return 0
    
    n = len(A)
    
    # Initialize minimum operations to be infinity
    min_operations = float('inf')
    
    # Iterate through all possible shifts of A
    for shift in range(n):
        # Check if the shifted A matches B
        if A == B:
            min_operations = min(min_operations, shift)
        
        # Shift A by one character to the left
        A = A[1:] + A[0]
        
        # Check if the shifted A matches B
        if A == B:
            min_operations = min(min_operations, shift + 1)
        
        # Shift A by one character to the right
        A = A[-1] + A[:-1]
        
        # Check if the shifted A matches B
        if A == B:
            min_operations = min(min_operations, shift + 1)
        
        # Flip A if B has a 1 at the corresponding position
        if B[shift] == "1":
            A = A[:shift] + str(1 - int(A[shift])) + A[shift+1:]
        
            # Check if the flipped A matches B
            if A == B:
                min_operations = min(min_operations, shift + 1)
    
    # Return the minimum number of operations required to achieve the goal
    if min_operations == float('inf'):
        return -1
    else:
        return min_operations

# Read input
A = input()
B = input()

# Call the function and print the result
print(count_operations(A, B))