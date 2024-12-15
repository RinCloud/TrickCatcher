N, X, M = map(int, input().split())

# calculate the remainder of x by m
def f(x, m):
    return x % m

A = [X]  # initialize the sequence A
for i in range(1, N):
    A.append(f(A[i-1]**2, M))  # compute A_i using the recurrence relation

sum_A = sum(A)  # calculate the sum of the sequence A
print(sum_A)