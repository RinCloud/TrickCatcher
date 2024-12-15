# Read input
N = int(input())
A = []
for _ in range(N):
    A.append(int(input()))

# Initialize variables
count = 0
i = 0

# Sort the sequence in increasing order
while i < N:
    if A[i] == i + 1:
        i += 1
    else:
        if A[i + 1] == i + 1:
            # Perform Operation 1: reverse 2 consecutive elements
            A[i], A[i + 1] = A[i + 1], A[i]
            count += 1
        else:
            # Perform Operation 2: reverse 3 consecutive elements
            A[i], A[i + 1], A[i + 2] = A[i + 2], A[i + 1], A[i]
            count += 1
            i += 2

# Print the minimum number of times Operation 1 performed
print(count)