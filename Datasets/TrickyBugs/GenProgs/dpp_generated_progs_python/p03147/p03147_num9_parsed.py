# Get the input values
N = int(input())
h = list(map(int, input().split()))

# Initialize the count to keep track of watering operations
count = 0

# Iterate through each flower, starting from the second one
for i in range(1, N):
    # Check if the height of the current flower is less than the previous one
    if h[i] < h[i-1]:
        # Add the difference between the heights to the count
        count += h[i-1] - h[i]

# Add the total number of watering operations required, which is equal to the maximum height
# in the flower bed (last element in the h list)
count += h[-1]

# Print the minimum number of watering operations required
print(count)