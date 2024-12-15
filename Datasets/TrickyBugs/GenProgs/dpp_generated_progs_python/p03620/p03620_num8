def min_operations(A, B):
    n = len(A)
    count = 0
    
    # check if A and B are already equal
    if A == B:
        return count
    
    # check if it is impossible to make A and B equal
    if '1' in A and '0' not in B:
        return -1
    
    # check all possible shifts
    for _ in range(n):
        # shift A by one character to the left
        A = A[1:] + A[0]
        count += 1
        
        # check if A is equal to B after shifting
        if A == B:
            return count
    
    # check all possible flips
    for i in range(n):
        if B[i] == '1':
            # flip A_i
            A = A[:i] + str(1 - int(A[i])) + A[i+1:]
            count += 1
            
            # check if A is equal to B after flipping
            if A == B:
                return count
    
    # if A is still not equal to B, it is unreachable
    return -1


# read input
A = input()
B = input()

# calculate and print result
result = min_operations(A, B)
print(result)