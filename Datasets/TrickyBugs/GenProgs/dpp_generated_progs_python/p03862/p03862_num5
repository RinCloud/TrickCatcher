# Getting the input

N, x = map(int, input().split())
a = list(map(int, input().split()))

# Initializing the count of operations
ops = 0

# Traversing the boxes from the left to the right
for i in range(N-1):
    # Checking if the sum of candies in the current and next box exceeds the limit x
    if a[i] + a[i+1] > x:
        # Calculating the excess candies
        excess = (a[i] + a[i+1]) - x
        
        # Checking which box to eat candies from to minimize the operations
        if a[i] > excess:
            # Eating candies from the current box
            a[i] -= excess
        else:
            # Eating candies from the next box
            a[i+1] -= excess
        
        # Updating the count of operations
        ops += excess

# Printing the minimum number of operations required to achieve the objective
print(ops)