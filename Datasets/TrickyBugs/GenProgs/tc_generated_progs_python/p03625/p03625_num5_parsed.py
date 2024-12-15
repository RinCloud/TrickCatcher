n = int(input())
A = list(map(int, input().split()))

A.sort()

max_area = 0

# Iterate through all combinations of 4 sticks
for i in range(n):
    for j in range(i + 1, n):
        for k in range(j + 1, n):
            for l in range(k + 1, n):
                # Check if the four sticks can form a rectangle
                if A[i] == A[j] and A[k] == A[l] and A[i] != A[k]:
                    # Calculate the area of the rectangle
                    area = A[i] * A[k]
                    # Update the maximum area if necessary
                    max_area = max(max_area, area)

print(max_area)
