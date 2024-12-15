def find_boxes_with_red_ball(N, M, operations):
    # Initialize the state of the boxes (box 1 contains a red ball, others contain white balls)
    boxes = {i: 'white' for i in range(1, N+1)}
    boxes[1] = 'red'

    for x, y in operations:
        # Move a ball from box x to box y
        if boxes[x] == 'red':
            boxes[y] = 'red'

    # Count the number of boxes that may contain the red ball
    count = sum(ball == 'red' for ball in boxes.values())

    return count

# Read the input
N, M = map(int, input().split())
operations = [tuple(map(int, input().split())) for _ in range(M)]

# Find the boxes with the red ball
result = find_boxes_with_red_ball(N, M, operations)

# Output the result
print(result)
