from sys import stdin

# Read the input
N = int(stdin.readline().strip())
boxes = []
for _ in range(N):
    x, y = map(int, stdin.readline().strip().split())
    boxes.append((x, y))

# Sort the boxes based on the maximum integer written on them
boxes.sort(key=lambda box: max(box[0], box[1]))

# Calculate the minimum possible value
min_value = float('inf')
for i in range(N):
    # Calculate the maximum and minimum integers for red balls
    r_max = max(boxes[i][0], boxes[i][1])
    r_min = min(boxes[i][0], boxes[i][1])

    # Calculate the maximum and minimum integers for blue balls
    b_max = max(boxes[N - i - 1][0], boxes[N - i - 1][1])
    b_min = min(boxes[N - i - 1][0], boxes[N - i - 1][1])

    # Update the minimum possible value
    min_value = min(min_value, (r_max - r_min) * (b_max - b_min))

# Print the result
print(min_value)