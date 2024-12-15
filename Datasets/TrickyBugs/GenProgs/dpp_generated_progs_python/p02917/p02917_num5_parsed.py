# Getting input from user
N = int(input())
B = list(map(int, input().split()))

# Initializing the sum of array A as 0
sum_A = 0

# Iterating through each index in B
for i in range(N-1):
    # Adding the maximum value between A[i] and A[i+1] to the sum of array A
    sum_A += max(B[i], B[i+1])

# Printing the maximum possible sum of the elements of A
print(sum_A)