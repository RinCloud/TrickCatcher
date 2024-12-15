# Program

# Read N and M
N, M = map(int, input().split())

# Initialize a list to keep track of the number of balls in each box
balls = [1] + [0] * (N - 1)

# Iterate through each operation
for _ in range(M):
    # Read the operation
    x, y = map(int, input().split())

    # Decrement the number of balls in box x
    balls[x - 1] -= 1

    # Increment the number of balls in box y
    balls[y - 1] += 1

# Count the number of boxes that may contain the red ball
count = sum(1 for ball in balls if ball > 0)

# Print the result
print(count)