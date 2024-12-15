def min_operations(A: str, B: str) -> int:
    # Check if the lengths of the strings are different
    if len(A) != len(B):
        return -1
        
    # Initialize operations count to 0
    operations = 0
    
    # Check if A and B are already equal
    if A == B:
        return operations
    
    # Check if A can be shifted to match B
    if A[1:] + A[0] == B:
        return operations + 1
    
    # Check if A can be flipped to match B
    if A[0] == B[0]:
        flipped_A = '1' if A[0] == '0' else '0'
        
        # Check if flipped A can be shifted to match B
        if flipped_A[1:] + flipped_A[0] == B:
            return operations + 1
        
    # Check if A can be flipped and then shifted to match B
    if A[0] == B[1]:
        flipped_A = '1' if A[0] == '0' else '0'
        
        # Check if flipped and shifted A can be shifted to match B
        if flipped_A[1:] + flipped_A[0] == B[2:] + B[0]:
            return operations + 2
    
    # Check if A can be flipped, shifted, and flipped again to match B
    if A[1:] + A[0] == B[2:] + B[0]:
        return operations + 3
    
    # If none of the above conditions are met, the goal is unreachable
    return -1

# Get input values from user
A = input()
B = input()

# Call the min_operations function and print the result
print(min_operations(A, B))
