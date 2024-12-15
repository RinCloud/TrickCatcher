# Getting input and converting to proper data types
N, M = map(int, input().split())
A = list(map(int, input().split()))
operations = []
for _ in range(M):
    B, C = map(int, input().split())
    operations.append((B, C))

# Sort the operations in descending order of C
operations.sort(key=lambda x: -x[1])

# Apply the operations in order
for B, C in operations:
    # Sort the first B largest elements of A
    A.sort(reverse=True)
    # Replace the first B elements with C
    for i in range(B):
        if A[i] < C:
            A[i] = C
        else:
            break

# Print the sum of all elements in A
print(sum(A))