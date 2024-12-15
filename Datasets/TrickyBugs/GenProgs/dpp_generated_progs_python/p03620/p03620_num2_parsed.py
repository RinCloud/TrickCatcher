def min_operations(A, B):
    if len(A) != len(B):
        return -1
    
    n = len(A)
    operations = 0
    
    for i in range(n):
        if A == B:
            return operations
        
        if B[i] == '1':
            A = A[-1] + A[:-1]  # Shift A by one character to the right
            
            if A[i] == '0':
                A = A[:i] + '1' + A[i+1:]  # Flip A[i]
                
            operations += 1
    
    return -1


# Read input from standard input
A = input().strip()
B = input().strip()

# Call the function and print the result
print(min_operations(A, B))