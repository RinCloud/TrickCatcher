# Program

n, x = map(int, input().split())
a = list(map(int, input().split()))

a.sort() # Sorting the array in ascending order

count = 0 # Initializing the count of happy children to 0

for i in range(n):
    if x >= a[i]: # If there are enough sweets to satisfy the current child
        count += 1 # Increment the count of happy children
        x -= a[i] # Decrease the number of remaining sweets

# Printing the maximum possible number of happy children
print(count)