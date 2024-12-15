# program to find the sum of ((A_i * A_j) % P) over all N * (N-1) / 2 unordered pairs of elements (i < j)

# function to calculate the sum
def calculate_sum(N, A):
    P = 200003  # prime value
    
    # initialize sum
    sum = 0
    
    # iterate over all pairs (i, j)
    for i in range(N):
        for j in range(i + 1, N):
            # calculate (A[i] * A[j]) % P and add to sum
            sum += (A[i] * A[j]) % P
    
    # return the sum
    return sum

# read input N
N = int(input())

# read input A
A = list(map(int, input().split()))

# call function to calculate sum
result = calculate_sum(N, A)

# print the result
print(result)