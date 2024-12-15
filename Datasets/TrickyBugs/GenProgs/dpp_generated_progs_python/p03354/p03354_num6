'''
# Find the maximum possible number of i such that p_i = i after operations.

# read input values for N and M
N, M = map(int, input().split())

# read input permuatation of integers from 1 to N
p = list(map(int, input().split()))

# initialize counter variable for number of i such that p_i = i
count = 0

# loop through each pair (x,y) and check if swapping p[x] and p[y] would result in p[x] = x
for _ in range(M):
    x, y = map(int, input().split())
    if p[x-1] == x:
        count += 1
    if p[y-1] == y:
        count += 1

# print the maximum possible number of i such that p_i = i after operations
print(count)
'''