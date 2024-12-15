# Get the input
N, K = map(int, input().split())
A = list(map(int, input().split()))

# Sort the list in non-decreasing order
A.sort()

# If K is odd, then we choose the maximum element as part of the product
# Otherwise, if K is even, we choose the maximum element if it is non-negative, otherwise we choose the minimum element
if K % 2 == 1:
    product = A[N-1]
    i = N - 2
    K -= 1
else:
    if A[N-1] >= 0:
        product = A[N-1]
        i = N - 2
        K -= 1
    else:
        product = 1
        i = 0

# Multiply the next pair of elements with the largest absolute value until we have chosen K elements
while K > 0:
    if A[i]*A[i+1] > A[i]*A[i-1]:
        product = (product * A[i] % (10**9+7)) * A[i+1] % (10**9+7)
        i -= 2
        K -= 2
    else:
        product = (product * A[i] % (10**9+7)) * A[i-1] % (10**9+7)
        i -= 2
        K -= 2

# Print the result
print(product)