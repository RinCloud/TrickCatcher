# Program

def number_of_boxes(N, M, operations):
    # Initialize an array to track the color of each box
    box_colors = ['white'] * N
    box_colors[0] = 'red'

    # Perform the operations
    for i in range(M):
        x, y = operations[i]
        x -= 1  # Convert to 0-based indexing
        y -= 1  # Convert to 0-based indexing

        # If box x contains a red ball, move it to box y
        if box_colors[x] == 'red':
            box_colors[y] = 'red'

        # If box y contains a red ball, move it to box x
        if box_colors[y] == 'red':
            box_colors[x] = 'red'

    # Count the number of boxes that contain the red ball
    red_boxes = 0
    for color in box_colors:
        if color == 'red':
            red_boxes += 1

    return red_boxes

# Get input values
N, M = map(int, input().split())
operations = [list(map(int, input().split())) for _ in range(M)]

# Call the function and print the result
result = number_of_boxes(N, M, operations)
print(result)