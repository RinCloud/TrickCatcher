# Algorithm:
1. Read the value of N from the input.
2. Create two empty arrays, X and Y, to store the x and y coordinates respectively.
3. Read the input values of x and y coordinates and append them to the respective arrays.
4. Sort both X and Y arrays in ascending order.
5. Create four empty arrays: leftCounts, rightCounts, upCounts, downCounts, each of size N.
6. Initialize all arrays with zeros.
7. For each index i from 0 to N-1:
    - For each index j from i+1 to N-1:
        - If X[j] > X[i], increment rightCounts[i].
        - If X[j] < X[i], increment leftCounts[i].
        - If Y[j] > Y[i], increment upCounts[i].
        - If Y[j] < Y[i], increment downCounts[i].
8. Create a variable totalSum and initialize it to zero.
9. For each index i from 0 to N-1:
    - Calculate the sum for the i-th point using the formula:
        sum_i = (leftCounts[i] + 1) * (rightCounts[i] + 1) * (upCounts[i] + 1) * (downCounts[i] + 1)
    - Add the calculated sum_i to the totalSum.
10. Print totalSum modulo 998244353.

# Code:
MOD = 998244353

# Read the value of N
N = int(input())

# Create empty arrays to store x and y coordinates
xCoordinates = []
yCoordinates = []

# Read the input values of x and y coordinates
for _ in range(N):
    x, y = map(int, input().split())
    xCoordinates.append(x)
    yCoordinates.append(y)

# Sort the x and y coordinates arrays in ascending order
xCoordinates.sort()
yCoordinates.sort()

# Create arrays to store counts
leftCounts = [0] * N
rightCounts = [0] * N
upCounts = [0] * N
downCounts = [0] * N

# Calculate counts for each point
for i in range(N):
    for j in range(i + 1, N):
        if xCoordinates[j] > xCoordinates[i]:
            rightCounts[i] += 1
        elif xCoordinates[j] < xCoordinates[i]:
            leftCounts[i] += 1
        if yCoordinates[j] > yCoordinates[i]:
            upCounts[i] += 1
        elif yCoordinates[j] < yCoordinates[i]:
            downCounts[i] += 1

# Calculate the total sum
totalSum = 0
for i in range(N):
    sum_i = (leftCounts[i] + 1) * (rightCounts[i] + 1) * (upCounts[i] + 1) * (downCounts[i] + 1)
    totalSum = (totalSum + sum_i) % MOD

# Print the total sum
print(totalSum)