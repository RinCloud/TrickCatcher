# get the number of children
N = int(input())

# get the activeness of each child
A = list(map(int, input().split()))

# sort the activeness in non-increasing order
A.sort(reverse=True)

# calculate the maximum total happiness points
total_happiness = 0
for i in range(N):
    total_happiness += A[i] * abs(i - (N-i-1))

# print the maximum total happiness points
print(total_happiness)