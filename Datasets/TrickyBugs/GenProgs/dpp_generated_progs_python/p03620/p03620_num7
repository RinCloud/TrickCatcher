'''
We can approach this problem by simulating the operations and keep track of the minimum number of operations required to make A and B equal. 
Here is the code that solves the problem:
'''

def min_operations(A, B):
    n = len(A)
    min_ops = float('inf')
    
    for i in range(n):
        if A == B:
            min_ops = min(min_ops, i)
        
        A = A[1:] + A[0]  # Shift A by one character to the left
        if B[i] == '1':  
            A = A[:i] + str(1 - int(A[i])) + A[i+1:]  # Flip A_i if B_i is 1
        
    if A == B:
        min_ops = min(min_ops, n)
    
    return min_ops if min_ops != float('inf') else -1
    

# Read input from standard input
A = input().strip()
B = input().strip()

# Call the function and print the result
print(min_operations(A, B))