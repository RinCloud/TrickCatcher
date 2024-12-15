# Function to calculate the earliest possible time to reach coordinate X
def earliest_time(X):
    time = 0
    position = 0
    
    while position < X:
        time += 1
        position += time
    
    return time

# Get input from user
X = int(input())

# Calculate earliest time to reach coordinate X
earliest = earliest_time(X)

# Print the earliest possible time
print(earliest)