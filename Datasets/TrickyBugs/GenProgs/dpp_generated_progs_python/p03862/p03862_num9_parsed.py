'''
# Approach:
1. We want to minimize the number of operations required to ensure that any two neighboring boxes contain at most x candies in total.
2. To minimize the operations, we should target boxes with maximum candies first, and decrease their count until they have exactly x candies.
3. Iterate over the boxes from left to right and check if the sum of the candies in the current box and the next box exceeds x.
4. If sum of candies exceeds x, we will reduce candies in the current box to (x - candies in the next box) and count the number of operations required.
5. Finally, print the total number of operations required.

# Let's write the code:

'''

# Read the input values
N, x = map(int, input().split())
a = list(map(int, input().split()))

# Initialize count variable to keep track of operations
count = 0

# Iterate over the boxes
for i in range(N-1):
    # Check if sum of candies in current box and next box exceeds x
    if a[i] + a[i+1] > x:
        # Reduce candies in current box
        diff = (a[i] + a[i+1]) - x
        a[i+1] = max(0, a[i+1] - diff)
        count += diff

# Print the minimum number of operations required
print(count)