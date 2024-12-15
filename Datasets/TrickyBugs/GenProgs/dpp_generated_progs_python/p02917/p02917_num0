# Given sequence B of length N-1, and we know that B[i] >= max(A[i], A[i+1]) 
# Our goal is to find the maximum possible sum of the elements in A
# The length of sequence A is N

# Read input from standard input
N = int(input())
B = list(map(int, input().split()))

# Initialize the sum of elements in A to be the first element of B
sum_A = B[0]

# Iterate through B[i] and add the maximum value between B[i] and B[i+1] to sum_A
for i in range(N-2):
    sum_A += min(B[i], B[i+1])
    
# Add the last element of B to sum_A
sum_A += B[-1]

# Print the maximum possible sum of the elements in A
print(sum_A)