# Input
N, M = map(int, input().split())
A = list(map(int, input().split()))

# Sort the prices in decreasing order
A.sort(reverse=True)

# Initialize the total cost
total_cost = sum(A)

# Use the discount tickets
for i in range(M):
    # Divide the price by 2 and round down to the nearest integer
    A[0] = A[0] // 2

    # Sort the prices again
    A.sort(reverse=True)

# Calculate the minimum amount of money required to buy all the items
min_cost = sum(A)

# Output the result
print(min_cost)