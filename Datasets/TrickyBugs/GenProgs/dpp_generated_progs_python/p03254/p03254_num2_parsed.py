# Taking input values
N, x = map(int, input().split())
a = list(map(int, input().split()))

# Sort the list in ascending order
a.sort()

# Initialize variables
happy_children = 0

# Iterate through the list of children
for i in range(N):
    # Check if the remaining sweets are enough for the current child
    if x >= a[i]:
        # Distribute the sweets to the current child
        x -= a[i]
        # Increment the number of happy children
        happy_children += 1
    else:
        # No more sweets remaining, break the loop
        break

# Print the maximum possible number of happy children
print(happy_children)