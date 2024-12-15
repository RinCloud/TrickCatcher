# Function to find the number of boxes that may contain the red ball after all operations are performed
def find_boxes(N, M, operations):
    # Initialize a list to keep track of the status of each box
    boxes = [0] * (N + 1)
    boxes[1] = 1  # Box 1 contains the red ball initially

    # Iterate through each operation
    for operation in operations:
        x, y = operation
        boxes[y] = max(boxes[y], boxes[x])  # Put the ball from box x into box y

        if boxes[x] == 1:  # If box x contains the red ball, update the status of box y
            boxes[x] = 0

    # Count the number of boxes that may contain the red ball after all operations
    count = sum(boxes)

    return count


# Read the input values
N, M = map(int, input().split())

# Read the operations
operations = []
for _ in range(M):
    operation = tuple(map(int, input().split()))
    operations.append(operation)

# Find the number of boxes that may contain the red ball after all operations are performed
result = find_boxes(N, M, operations)

# Print the result
print(result)