'''
# Approach:
# Initialize a variable `coordinate` to 0 to keep track of the current coordinate of the ball.
# Initialize a variable `bounce_count` to 0 to keep track of the number of bounces where the coordinate is at most X.
# Iterate over the given list of bounces `L` from index 0 to N-1:
#   - Update the coordinate as `coordinate = coordinate + L[i]`.
#   - If the updated coordinate is less than or equal to X, increment `bounce_count` by 1.
# Increment the `bounce_count` by 1 to account for the initial bounce at coordinate 0.
# Print the `bounce_count` as the output.

N, X = map(int, input().split())
L = list(map(int, input().split()))

coordinate = 0
bounce_count = 0

for i in range(N):
    coordinate += L[i]
    if coordinate <= X:
        bounce_count += 1

bounce_count += 1

print(bounce_count)
'''