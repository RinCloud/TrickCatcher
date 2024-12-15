# solution:

# get the value of N
N = int(input())

# get the list of N integers
A = list(map(int, input().split()))

# set the value of prime P
P = 200003

# initialize the sum
sum_mod = 0

# iterate through all unordered pairs of elements
for i in range(N):
    for j in range(i+1, N):
        # calculate (A[i]*A[j]) % P and add it to the sum
        sum_mod += (A[i] * A[j]) % P

# print the sum
print(sum_mod)