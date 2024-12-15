# Get the values of N and K from the user
N, K = map(int, input().split())

# Initialize a variable to count the number of digits
count = 0

# Keep dividing N by K until N becomes 0
while N > 0:
    N //= K
    count += 1

# Print the number of digits
print(count)