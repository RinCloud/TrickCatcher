# Get input
N, x = map(int, input().split())
a = list(map(int, input().split()))

# Initialize counter
operations = 0

# Iterate through all the boxes except the last one
for i in range(N-1):
    # Calculate the total candies in the current and next box
    total_candies = a[i] + a[i+1]
    
    # Check if the total candies in the current and next box is greater than x
    if total_candies > x:
        # Calculate the excess candies
        excess_candies = total_candies - x
        
        # Eat one candy from the current box and update the candies count
        if a[i] >= excess_candies:
            a[i] -= excess_candies
        else:
            excess_candies -= a[i]
            a[i] = 0
            
            # Reduce the excess candies from the next box and update the candies count
            if a[i+1] >= excess_candies:
                a[i+1] -= excess_candies
            else:
                a[i+1] = 0
        
        # Increment the operations counter
        operations += total_candies - x

# Print the minimum number of operations required
print(operations)