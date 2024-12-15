# Program

def get_operations_required(A, B):
    operations_required = 0
    
    # If A and B are already equal, return 0
    if A == B:
        return 0
    
    # If B contains only zeros, it's not possible to make A and B equal
    if '1' not in B:
        return -1
    
    # Check if rotating left or right brings A and B close
    for i in range(len(A)):
        A = A[1:] + A[0]
        operations_required += 1
        if A == B:
            return operations_required
    
    # Check if flipping any A_i where B_i = 1 makes A and B equal
    for i in range(len(A)):
        if B[i] == '1':
            A = A[:i] + str(1 - int(A[i])) + A[i + 1:]
            operations_required += 1
            if A == B:
                return operations_required
    
    # If A and B are still not equal, it's not possible to make them equal
    return -1


# Read input from standard input
A = input()
B = input()

# Get smallest number of operations required to make A and B equal
operations_required = get_operations_required(A, B)

# Print the result
print(operations_required)