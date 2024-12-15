# Read the input values
N, K = map(int, input().split())

# Initialize count to 0
count = 0

# Divide N by K until N becomes 0
while N > 0:
    N //= K
    count += 1

# Print the count
print(count)