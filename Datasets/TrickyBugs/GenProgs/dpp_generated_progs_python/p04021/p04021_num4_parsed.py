'''
# Plan:
# 1. Iterate over the given sequence and check if the elements are in increasing order.
# 2. If they are not in increasing order, check if there is a larger element after the current element.
# 3. If there is, increment the count of Operation 1 needed and reverse the order of the two consecutive elements.
# 4. Repeat step 2 until all elements are in increasing order.
# 5. Print the count of Operation 1 needed.

# Implementation:
'''

N = int(input())
A = [int(input()) for _ in range(N)]

count = 0

for i in range(N - 1):
    if A[i] > A[i + 1]:
        count += 1
        A[i], A[i + 1] = A[i + 1], A[i]

print(count)