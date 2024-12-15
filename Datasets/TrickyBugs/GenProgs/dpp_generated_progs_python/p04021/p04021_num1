def min_operation_1(N, A):
    min_operation = 0
    
    # Check if the given sequence is already sorted
    if A == sorted(A):
        return min_operation
    
    # Find the first element that is out of order
    for i in range(N-1):
        if A[i] > A[i+1]:
            x = A[i]
            break
    
    # Find the index of x in the sorted sequence
    idx = sorted(A).index(x)
    
    # Check if x and x+1 are consecutive in the sorted sequence
    if idx+1 < N and A.index(x+1) == A.index(x) + 1:
        min_operation = 1
    
    return min_operation

# Read input values
N = int(input())
A = []
for _ in range(N):
    A.append(int(input()))

# Print the minimum number of operations
print(min_operation_1(N, A))