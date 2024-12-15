'''
The idea to solve this problem is to check if the grid can be made symmetric by swapping rows and columns. We can do this by iterating through each element in the grid and comparing it with its symmetric element. If any pair of elements doesn't match, then it is not possible to make the grid symmetric.

Pseudocode:
1. Read input values for H and W.
2. Create an empty matrix with dimensions HxW.
3. Read the string values for S_i and store them in the matrix.
4. Iterate through each element in the matrix:
   - Check if the element matches its symmetric element:
     - If not, print "NO" and exit.
5. If we reach this point, it means all elements match their symmetric elements, so print "YES".

'''

H, W = map(int, input().split())

# Create the matrix
matrix = []
for _ in range(H):
    matrix.append(list(input()))

# Iterate through each element in the matrix
for i in range(H):
    for j in range(W):
        # Check if the element matches its symmetric element
        if matrix[i][j] != matrix[H - i - 1][W - j - 1]:
            print("NO")
            exit()

# All elements match their symmetric elements
print("YES")