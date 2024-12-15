'''
1. Read the input N
2. Read the heights of N persons into a list A
3. Initialize a variable min_height to 0
4. Traverse the list A starting from the second element
    a. If the current person's height is greater than the previous person's height,
       calculate the difference in heights and add it to the min_height variable
5. Print the value of min_height
'''

N = int(input())
A = list(map(int, input().split()))

min_height = 0

for i in range(1, N):
    if A[i] > A[i-1]:
        min_height += A[i] - A[i-1]

print(min_height)