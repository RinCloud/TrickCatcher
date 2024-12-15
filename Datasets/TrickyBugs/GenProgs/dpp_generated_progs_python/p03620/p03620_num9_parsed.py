def min_operations(A, B):
    if A == B:
        return 0
    
    n = len(A)
    
    # check if the goal is unreachable
    if A.count('1') != B.count('1'):
        return -1
    
    # shift operations
    A_shift_left = A[1:] + A[0]
    A_shift_right = A[-1] + A[:-1]
    
    # flip operations
    A_flip = list(A)
    B_indices = [i for i, char in enumerate(B) if char == '1']
    
    min_ops = float('inf')
    
    # try all possible operations
    for i in range(n):
        if B[i] == '1':
            A_flip[i] = str(1 - int(A_flip[i]))
            
            # update the flip operations count
            ops = 1
            
            # check if strings A after flipping is equal to B
            if ''.join(A_flip) == B:
                min_ops = min(min_ops, ops)
                
            # check if shifted strings A after flipping is equal to B
            shift_left = A_flip[1:] + A_flip[0]
            shift_right = A_flip[-1] + A_flip[:-1]
            
            if shift_left == B:
                min_ops = min(min_ops, ops + 1)
            if shift_right == B:
                min_ops = min(min_ops, ops + 1)
                
            # turn back the flipped character
            A_flip[i] = str(1 - int(A_flip[i]))
                
    if min_ops == float('inf'):
        return -1
    else:
        return min_ops


# read inputs
A = input().strip()
B = input().strip()

# call function and print result
print(min_operations(A, B))