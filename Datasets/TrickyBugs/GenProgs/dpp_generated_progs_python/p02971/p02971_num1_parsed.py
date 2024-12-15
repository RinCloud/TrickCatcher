import sys

# Read input values
N = int(sys.stdin.readline())
A = []
for _ in range(N):
    A.append(int(sys.stdin.readline()))

# Find maximum values
for i in range(N):
    max_val = -1
    for j in range(N):
        if i != j:
            max_val = max(max_val, A[j])
    print(max_val)