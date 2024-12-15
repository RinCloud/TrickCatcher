# First, let's read the input

N, K = map(int, input().split())
A = list(map(int, input().split()))

# Now let's initialize the sequence s
s = []

# Iterate through each element X_i
for i in range(N * K):
    # If X_i is not in s, add it to the end of s
    if A[i % N] not in s:
        s.append(A[i % N])
    # If X_i is in s, repeatedly delete the element at the end of s until s no longer contains X_i
    else:
        while s[-1] == A[i % N]:
            s.pop()

# Finally, print the elements of s after the operations
print(*s)