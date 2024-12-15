from sys import stdin

# Read input
N = int(stdin.readline().strip())

# Initialize variables
red = []
blue = []

for _ in range(N):
    x, y = map(int, stdin.readline().strip().split())
    red.append(x)
    blue.append(y)

# Sort the red and blue balls in non-decreasing order
red.sort()
blue.sort()

# Calculate the differences
diff_red = red[N-1] - red[0]
diff_blue = blue[N-1] - blue[0]

# Calculate the minimum possible value
min_value = diff_red * diff_blue

# Print the result
print(min_value)