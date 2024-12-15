'''
This problem requires finding the minimum number of operations to paint black squares in a white square grid based on given constraints.

To solve this problem, we can follow these steps:

1. Read the input values for N, K and the H values.
2. Initialize a variable `min_operations` to keep track of the minimum number of operations.
3. Iterate through each column from 1 to N.
    a. If the column is within the first K columns, we can modify the H value.
    b. Update the `min_operations` by adding the H value for the current column.
4. Print the `min_operations`.

Let's implement the solution in Python:
'''

def min_operations(N, K, H):
    min_operations = 0
    
    for i in range(N):
        if i < K:
            min_operations += H[i] 
        else:
            min_operations += max(H[i], 0)
    
    return min_operations

# Read the input
N, K = map(int, input().split())
H = list(map(int, input().split()))

# Call the function and print the result
print(min_operations(N, K, H))